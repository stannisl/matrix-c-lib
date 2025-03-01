
#include "test_matrix.h"

int double_compare(MATRIX_TYPE a, MATRIX_TYPE b) {
    return fabs(a - b) < EPS;
}

Matrix *create_test_matrix(int rows, int cols, MATRIX_TYPE data[]) {
    Matrix *m = create_matrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            m->data[i][j] = data[i * cols + j];
        }
    }
    return m;
}

/* Главная функция для запуска тестов */
int main() {
    CU_pSuite suite = NULL;

    if (CU_initialize_registry() != CUE_SUCCESS)
        return CU_get_error();

    suite = CU_add_suite("Matrix Tests", NULL, NULL);
    if (!suite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Добавляем тесты
    CU_add_test(suite, "Matrix Copy", test_copy_matrix_1);
    CU_add_test(suite, "Matrix Addition", test_matrix_addition_1);
    CU_add_test(suite, "Matrix Multiplication", test_matrix_multiplication_1);
    CU_add_test(suite, "Determinant Calculation", test_determinant_1);
    CU_add_test(suite, "Matrix Transpose", test_transpose_1);
    CU_add_test(suite, "Load from File", test_load_from_file_1);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}