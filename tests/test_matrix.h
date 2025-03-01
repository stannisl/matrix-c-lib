#ifndef TEST_MATRIX_H
#define TEST_MATRIX_H

#include "../src/matrix/matrix.h"
#include "../src/output/output.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

#define EPS 1e-6

/* Тесты для determinant */
extern void test_determinant_1(void);

/* Тесты для multiply_matrices */
extern void test_matrix_multiplication_1(void);

/* Тесты для transpose_matrix */
extern void test_transpose_1(void);

/* Тесты для load_matrix_from_file */
extern void test_load_from_file_1(void);

/* Тесты для sum_matrices */
extern void test_matrix_addition_1(void);

/* Тесты для copy_matrix */
extern void test_copy_matrix_1(void);

/* Вспомогательные функции */
int double_compare(MATRIX_TYPE a, MATRIX_TYPE b);
Matrix *create_test_matrix(int rows, int cols, MATRIX_TYPE data[]);

#endif // TEST_MATRIX_H