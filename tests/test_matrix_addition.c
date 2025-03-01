#include "test_matrix.h"

void test_matrix_addition_1(void) {
    MATRIX_TYPE a[] = {1, 2, 3, 4};
    MATRIX_TYPE b[] = {5, 6, 7, 8};
    MATRIX_TYPE expected[] = {6, 8, 10, 12};

    Matrix *m1 = create_test_matrix(2, 2, a);
    Matrix *m2 = create_test_matrix(2, 2, b);
    Matrix *result = sum_matrices(m1, m2);

    CU_ASSERT_PTR_NOT_NULL(result);
    for (int i = 0; i < 4; i++) {
        CU_ASSERT_TRUE(double_compare(result->data[i / 2][i % 2], expected[i]));
    }

    free_matrix(m1);
    free_matrix(m2);
    free_matrix(result);
}