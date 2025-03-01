#ifndef MATRIX_H
#define MATRIX_H
#include <stdio.h>
#include <stdlib.h>

#include "../../include/config.h"
/**
 * @brief Структура матрицы
 */
typedef struct {
    int rows;
    ///< Количество строк
    int cols;
    ///< Количество столбцов
    MATRIX_TYPE **data; ///< Данные матрицы
} Matrix;
/**
 * @brief Создает новую матрицу с заданными размерами
 * @param rows Количество строк
 * @param cols Количество столбцов
 * @return Указатель на созданную матрицу или NULL в случае ошибки
 */
Matrix *create_matrix(int rows, int cols);
/**
 * @brief Освобождает память, выделенную под матрицу
 * @param matrix Указатель на матрицу
 */
void free_matrix(Matrix *matrix);
/**
 * @brief Загружает матрицу из текстового файла
 * @param filename Имя файла
 * @return Указатель на загруженную матрицу или NULL в случае ошибки
 */
Matrix *load_matrix_from_file(const char *filename);
/**
 * @brief Выводит матрицу в консоль
 * @param matrix Указатель на матрицу
 */
void print_matrix(const Matrix *matrix);
/**
 * @brief Сохраняет матрицу в текстовый файл
 * @param matrix Указатель на матрицу
 * @param filename Имя файла
 * @return 0 в случае успеха, -1 в случае ошибки
 */
int save_matrix_to_file(const Matrix *matrix, const char *filename);
/**
 * @brief Копирует матрицу
 * @param source Указатель на исходную матрицу
 * @return Указатель на копию матрицы или NULL в случае ошибки
 */
Matrix *copy_matrix(const Matrix *source);
/**
 * @brief Складывает две матрицы
 * @param A Указатель на первую матрицу
 * @param B Указатель на вторую матрицу
 * @return Указатель на новую матрицу — результат сложения, либо NULL в случае
 * ошибки
 */
Matrix *add_matrices(const Matrix *A, const Matrix *B);
/**
 * @brief Умножает две матрицы
 * @param A Указатель на первую матрицу
 * @param B Указатель на вторую матрицу
 * @return Указатель на новую матрицу — результат умножения, либо NULL в случае
 * ошибки
 */
Matrix *multiply_matrices(const Matrix *A, const Matrix *B);
/*** @brief Транспонирует матрицу
 * @param matrix Указатель на матрицу
 * @return Указатель на новую транспонированную матрицу, либо NULL в случае
 * ошибки
 */
Matrix *transpose_matrix(const Matrix *matrix);
/**
 * @brief Вычисляет детерминант квадратной матрицы
 * @param matrix Указатель на квадратную матрицу
 * @return Значение детерминанта матрицы
 */
MATRIX_TYPE determinant(const Matrix *matrix);
#endif // MATRIX_H