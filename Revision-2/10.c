// 10. Develop a program to multiply two matrices using pointers.

#include <stdio.h>

#define MAX_SIZE 10

void matrixMultiplication(int *mat1, int *mat2, int *result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            *(result + i * cols2 + j) = 0;
            for (int k = 0; k < cols1; k++) {
                *(result + i * cols2 + j) += *(mat1 + i * cols1 + k) * *(mat2 + k * cols2 + j);
            }
        }
    }
}

void displayMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows and columns for first matrix (max 10x10): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter number of rows and columns for second matrix (max 10x10): ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible: Number of columns in first matrix must be equal to number of rows in second matrix.\n");
        return 1;
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    matrixMultiplication(&mat1[0][0], &mat2[0][0], &result[0][0], rows1, cols1, cols2);

    printf("Resultant matrix after multiplication:\n");
    displayMatrix(&result[0][0], rows1, cols2);

}
