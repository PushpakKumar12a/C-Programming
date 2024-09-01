// // C program to multiply two matrices.

// #include <stdio.h>

// #define MAX 10

// // Function to print Matrix
// void printMatrix(int arr[][MAX],int n)
// {
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++)
// 			printf("%d ", arr[i][j]);

// 		printf("\n");
// 	}
// }

// // Function to multiply two matrices A[][] and B[][]
// void multiplyMatrix(int n, int A[][MAX],int B[][MAX])
// {
// 	int i, j, k;
// 	int C[MAX][MAX];

// 	for (i = 0; i < n; i++) {
// 		for (j = 0; j < n; j++) {
// 			C[i][j] = 0;
// 			for (k = 0; k < n; k++)
// 				C[i][j] += A[i][k] * B[k][j];
// 		}
// 	}

// 	printf("Multiplication Matrix: \n");
// 	printMatrix(C, n);
// }

// void addmatrix(int n,int A[][MAX],int B [][MAX]){
//     int i, j;
// 	int C[MAX][MAX];
    
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             C[i][j]=A[i][j]+B[i][j];
//         }
//     }

//     printf("Addition Matrix: \n");
// 	printMatrix(C, n);
// }

// int main()
// {
// 	int n, i, j, A[MAX][MAX], B[MAX][MAX];

// 	printf("Enter order of the square matrix : ");
//     scanf("%d",&n);

// 	// Read the elements of Matrix A from user
// 	printf("Enter %d elements of First Matrix : ",n*n);
// 	for (i = 0; i < n; i++) {
// 		for (j = 0; j < n; j++) {
// 			scanf("%d", &A[i][j]);
// 		}
// 	}
//     printMatrix(A,n);

// 	printf("Enter %d elements of second Matrix : ",n*n);
// 	for (i = 0; i < n; i++) {
// 		for (j = 0; j < n; j++) {
// 			scanf("%d", &B[i][j]);
// 		}
// 	}
//     printMatrix(B,n);
// 	multiplyMatrix(n,A,B);
//     addmatrix(n,A,B);

// 	return 0;
// }



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

// Function to add two matrices A[][] and B[][]
void addMatrix(int m, int n, int A[][MAX], int B[][MAX]) {
    int i, j;
    int C[MAX][MAX];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Addition Matrix: \n");
    printMatrix(C, m, n);
}

int main() {
    int m, n, p, i, j;
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

    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &p);

    printf("Enter %d elements of the second matrix: ", n * p);
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printMatrix(B, n, p);

    multiplyMatrix(m, n, p, A, B);

    if (m == n && n == p) {
        addMatrix(m, n, A, B);
    } else {
        printf("Addition not possible for non-square matrices.\n");
    }

    return 0;
}
