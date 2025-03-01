#include "test_matrix.h"

void test_copy_matrix_1(void) {
    MATRIX_TYPE data[] = {1, 2, 3, 4};
    Matrix *orig = create_test_matrix(2, 2, data);
    Matrix *copy = copy_matrix(orig);

    CU_ASSERT_EQUAL(copy->rows, orig->rows);
    CU_ASSERT_EQUAL(copy->cols, orig->cols);
    CU_ASSERT_TRUE(double_compare(copy->data[0][0], 1));
    CU_ASSERT_TRUE(double_compare(copy->data[1][1], 4));

    free_matrix(orig);
    free_matrix(copy);
}
