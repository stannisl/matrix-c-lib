#include "test_matrix.h"

void test_create_and_free(void) {
    Matrix *m = create_matrix(3, 4);
    CU_ASSERT_PTR_NOT_NULL(m);
    CU_ASSERT_EQUAL(m->rows, 3);
    CU_ASSERT_EQUAL(m->cols, 4);
    free_matrix(m);

    Matrix *invalid = create_matrix(-1, 5);
    CU_ASSERT_PTR_NULL(invalid);
}
