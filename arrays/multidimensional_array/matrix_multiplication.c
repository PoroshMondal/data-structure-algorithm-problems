#include<stdio.h>

int main(){
    int A[10][10], B[10][10], C[10][10], M, P, N;

    printf("Matrix Multiplication....");

    printf("Enter the number of rows for Matrix A: ");
    scanf("%d",&M);

    printf("Enter the number of columns for Matrix A and number of rows for Matrix B: ");
    scanf("%d",&P);

    printf("Enter the number columns for Matrix B: ");
    scanf("%d",&N);

    // input elements for Matrix A
    inputMatrixEntry(A, M, P);

    // input elements for Matrix B
    //inputMatrixEntry(B, P, N);

    // output the Multiplication of AB
    result(A, M, P);

    return 0;
}

void inputMatrixEntry(int matrix[10][10], int row, int column){

    printf("\nEnter matrix elements: \n\n");

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("Enter the entry for %d%d: ", i + 1, j + 1);
            scanf("%d",&matrix[i][j]);
        }
    }

}

void multiplyMatrix(int A[10][10], int B[10][10], int C[10][10], int M, int P, int N){

}

void result(int C[10][10], int M, int N){
    printf("\nThe result of Matrix Multiplication of A*B is: \n");
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            printf("%d ", C[i][j]);
            if(j == N - 1){
                printf("\n");
            }
        }
    }
}
