#include <stdio.h>
int main() {
    int a[50][50], b[50][50], c[50][50], i, j, k, m, n, e, f;

    // Input dimensions for Matrix A
    printf("Enter the rows and columns of matrix A:\n");
    scanf("%d%d", &m, &n);

    // Input dimensions for Matrix B
    printf("Enter the rows and columns of matrix B:\n");
    scanf("%d%d", &e, &f);

    // Validate dimensions for multiplication
    if (n != e) {
        printf("Matrix multiplication is not possible. Columns of A (%d) must equal rows of B (%d).\n", n, e);
        return 1;
    }

    // Input elements of Matrix A
    printf("Enter the values for matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print elements of Matrix A
    printf("Elements of matrix A are:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    // Input elements of Matrix B
    printf("Enter the values for matrix B:\n");
    for (i = 0; i < e; i++) {
        for (j = 0; j < f; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Print elements of Matrix B
    printf("Elements of matrix B are:\n");
    for (i = 0; i < e; i++) {
        for (j = 0; j < f; j++) {
            printf("b[%d][%d] = %d\n", i, j, b[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < f; j++) {
            c[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < f; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result matrix
    printf("Resultant matrix (A x B) is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < f; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}