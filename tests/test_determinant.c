#include "test_matrix.h"

void test_determinant_1(void) {
    MATRIX_TYPE data1[] = {5};
    MATRIX_TYPE data2[] = {1, 2, 3, 4};
    MATRIX_TYPE data3[] = {2, 3, 1, 1, 2, 3, 3, 1, 2};

    Matrix *m1 = create_test_matrix(1, 1, data1);
    Matrix *m2 = create_test_matrix(2, 2, data2);
    Matrix *m3 = create_test_matrix(3, 3, data3);

    CU_ASSERT_DOUBLE_EQUAL(determinant(m1), 5.0, EPS);
    CU_ASSERT_DOUBLE_EQUAL(determinant(m2), -2.0, EPS);
    CU_ASSERT_DOUBLE_EQUAL(determinant(m3), 18.0, EPS);

    free_matrix(m1);
    free_matrix(m2);
    free_matrix(m3);
}
