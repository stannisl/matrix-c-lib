#include "test_matrix.h"

void test_load_from_file_1(void) {
    const char filename[] = "test_matrix.txt";
    FILE *f = fopen(filename, "w");
    fprintf(f, "2 3\n1.5 2.5 3.5\n4.5 5.5 6.5\n");
    fclose(f);

    Matrix *m = load_matrix_from_file(filename);
    CU_ASSERT_PTR_NOT_NULL(m);
    CU_ASSERT_EQUAL(m->rows, 2);
    CU_ASSERT_EQUAL(m->cols, 3);
    CU_ASSERT_TRUE(double_compare(m->data[1][2], 6.5));

    free_matrix(m);
}