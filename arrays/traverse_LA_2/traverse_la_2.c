#include<stdio.h>

int main(){

    int linearArray[100] = {8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10,
     8, 4, 19, 2, 7, 13, 5, 16, 50, 10};

    int n = sizeof(linearArray) /sizeof(linearArray[0]);

    traverseArray(linearArray, n);

    return 0;
}

void traverseArray(int* la, int n){

    for(int i=0; i<n; i++){
        printf("%d ", la[i]);
    }

}

