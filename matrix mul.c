#include <stdio.h>

#define MAX_SIZE 10

void matrixInput(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void matrixMultiply(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int res[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2);
void matrixPrint(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);

int main() {
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int res[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    matrixInput(mat1, rows1, cols1);
    matrixInput(mat2, rows2, cols2);

    matrixMultiply(mat1, mat2, res, rows1, cols1, cols2);

    matrixPrint(res, rows1, cols2);

    return 0;
}

void matrixInput(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrixMultiply(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int res[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2) {
    int i, j, k;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            res[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void matrixPrint(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Resultant matrix:\n");
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

