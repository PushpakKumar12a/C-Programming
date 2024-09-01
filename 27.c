// WAP that finds the sum of diagonal elements of a mxn matrix.

#include <stdio.h>

int main() {
    int i, j, m, n, sum = 0,sum1=0;
    printf("Enter no. of rows and columns of matrix : ");
    scanf("%d%d",&m,&n);

    if (m == n) {
        int matrix[m][n];
        printf("Enter %d values of matrix : ",m*n);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&matrix[i][j]);
            }
        }

        printf("Matrix is \n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < m; ++i) {
            sum += matrix[i][i]; // Main diagonal
            sum1 += matrix[i][m - i - 1]; // Off-diagonal
        }

        printf("Main diagonal elements sum = %d\n", sum);
        printf("Secondary diagonal elements sum = %d", sum1);
    } else {
        printf("Not a square matrix.\n");
    }

    return 0;
}
