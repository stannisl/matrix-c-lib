# Matrix Library Documentation

## How to Build

**Build the library**:

```bash
make all
```

This will compile the source files and create a static library matrix.a in the build directory.

**Build and run the main program:**

```bash
make main
```

Compiles and executes the main.c file (if provided).

**Run tests:**

```bash
make test
```

Compiles and runs unit tests using CUnit.

**Check memory leaks with Valgrind:**

```bash
make valgrind
```

## Requirements

- Compiler: `GCC` (supports C11 standard).

- Libraries:

  - `CUnit` for testing (can be installed via package manager).

  - `math` for math operations.

- Tools:

  - `Valgrind` for memory leak detection (optional).

  - `Doxygen` for generating documentation (optional).

  - `cppcheck` for static code analyzing (optional).

  - `clang-format` for code style check (optional).

## Makefile Targets

| Target   | Description                                                |
| -------- | ---------------------------------------------------------- |
| all      | Builds the static library matrix.a (default target).       |
| main     | Compiles and runs the main.c program.                      |
| test     | Compiles and runs unit tests.                              |
| valgrind | Runs tests with Valgrind to detect memory leaks.           |
| cppcheck | Static code analysis using cppcheck.                       |
| docs     | Generates documentation using Doxygen (requires Doxyfile). |
| clean    | Removes the build directory and all generated files.       |

# Matrix Structure

## Matrix struct

The `Matrix` struct (defined in `config.h`) have the following fields:

    rows: Number of rows.

    cols: Number of columns.

    data: rows array of pointers type MATRIX_TYPE that points on array of cols (configured in config.h).

## Matrix.h Functions

| Function              | Description                                                        |
| --------------------- | ------------------------------------------------------------------ |
| create_matrix         | Creates a matrix with specified rows and columns.                  |
| free_matrix           | Frees memory allocated for a matrix.                               |
| load_matrix_from_file | Loads a matrix from a text file.                                   |
| copy_matrix           | Creates a deep copy of a matrix.                                   |
| sum_matrices          | Adds two matrices. Returns a new matrix or NULL on error.          |
| sub_matrices          | Subtracts two matrices. Returns a new matrix or NULL on error.     |
| multiply_matrices     | Multiplies two matrices. Returns a new matrix or NULL on error.    |
| transpose_matrix      | Transposes a matrix. Returns a new matrix or NULL on error.        |
| determinant           | Computes the determinant of a square matrix.                       |
| getMinorMatrix        | Computes the minor matrix by excluding a specified row and column. |
| isCorrectMatrix       | Checks if a matrix is valid (non-NULL with positive dimensions).   |
| isSizeEqual           | Checks if two matrices have the same dimensions.                   |

## Output.h Functions

| Function            | Description                                                     |
| ------------------- | --------------------------------------------------------------- |
| export_matrix       | Writes a matrix to a stream using a custom formatting callback. |
| rounded_print       | Prints a matrix element rounded to the nearest integer.         |
| default_print       | Prints a matrix element with 6 decimal places.                  |
| save_matrix_to_file | Saves a matrix to a text file.                                  |
| print_matrix        | Prints a matrix to the console using default_print.             |
