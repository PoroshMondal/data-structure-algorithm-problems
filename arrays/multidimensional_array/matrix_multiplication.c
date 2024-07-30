#include<stdio.h>

int main(){
    int A[10][10], B[10][10], C[10][10], M, P, N;

    printf("Enter the number of rows for Matrix A: ");
    scanf("%d",&M);

    printf("Enter the number of columns for Matrix A and number of rows for Matrix B: ");
    scanf("%d",&P);

    printf("Enter the number columns for Matrix B: ");
    scanf("%d",&N);

    //input elements for Matrix A
    printf("\nEnter the elements of matrix A: \n\n");
    inputMatrixEntry(A, M, P);

    //input elements for Matrix B
    printf("\nEnter the elements of matrix B: \n\n");
    inputMatrixEntry(B, P, N);

    //multiply the AB matrix
    multiplyMatrix(A,B,C,M,P,N);

    //output the Multiplication of AB
    result(C, M, N);

    return 0;
}

void inputMatrixEntry(int matrix[10][10], int row, int column){

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("Enter the entry for %d%d: ", i + 1, j + 1);
            scanf("%d",&matrix[i][j]);
        }
    }

}

void multiplyMatrix(int A[10][10], int B[10][10], int C[10][10], int M, int P, int N){

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            C[i][j] = 0;
            for(int k=0; k<P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

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
