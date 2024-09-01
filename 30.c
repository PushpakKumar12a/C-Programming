#include <stdio.h>

#define MAX 10

// Function to print Matrix
void printMatrix(int arr[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

// Function to multiply two matrices A[][] and B[][]
void multiplyMatrix(int m, int n, int p, int A[][MAX], int B[][MAX]) {
    int i, j, k;
    int C[MAX][MAX] = {0};

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Multiplication Matrix: \n");
    printMatrix(C, m, p);
}

int main() {
    int m, n, p, q, i, j;
    int A[MAX][MAX], B[MAX][MAX];

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter %d elements of the first matrix: ", m * n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printMatrix(A, m, n);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &p,&q);

    if(n!=p){
        printf("Matrix multiplicatio not possible");
        return 1;
    }

    printf("Enter %d elements of the second matrix: ", n * p);
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printMatrix(B, n, p);

    multiplyMatrix(m, n, p, A, B);
    return 0;
}
