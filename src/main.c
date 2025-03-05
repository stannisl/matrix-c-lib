#include "matrix/matrix.h"
#include "output/output.h"

int main() {
    Matrix *A = load_matrix_from_file("matrix_data/matrix_a.txt");
    Matrix *B = load_matrix_from_file("matrix_data/matrix_b.txt");
    Matrix *C = load_matrix_from_file("matrix_data/matrix_c.txt");
    Matrix *D = load_matrix_from_file("matrix_data/matrix_d.txt");

    // Считаем A - B^T * C - D

    // Считаем B^T
    Matrix *transposedB = transpose_matrix(B);

    // Считаем B^T * C
    Matrix *mul_tB_C = multiply_matrices(transposedB, C);

    // Считаем A - (B^T * C)
    Matrix *diff_A_tBC = sub_matrices(A, mul_tB_C);

    // Считаем (A - B^T * C) - D
    Matrix *res = sub_matrices(diff_A_tBC, D);

    print_matrix(res);

    free_matrix(A);
    free_matrix(B);
    free_matrix(C);
    free_matrix(D);

    free_matrix(transposedB);
    free_matrix(mul_tB_C);
    free_matrix(diff_A_tBC);
    free_matrix(res);
}