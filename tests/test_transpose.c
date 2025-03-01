#include "test_matrix.h"

void test_transpose_1(void) {
    MATRIX_TYPE data[] = {1, 2, 3, 4, 5, 6};
    Matrix *m = create_test_matrix(2, 3, data);
    Matrix *transposed = transpose_matrix(m);
    CU_ASSERT_EQUAL(transposed->rows, 3);
    CU_ASSERT_EQUAL(transposed->cols, 2);
    CU_ASSERT_TRUE(double_compare(transposed->data[0][0], 1));
    CU_ASSERT_TRUE(double_compare(transposed->data[1][1], 5));

    free_matrix(m);
    free_matrix(transposed);
}