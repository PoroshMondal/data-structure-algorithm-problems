#include<stdio.h>
int main(){

    int la[10] = {8, 4, 19, 2, 7, 13, 5, 16, 50, 10};

    int n = sizeof(la) / sizeof(la[0]);

    printf("The size of LA: %d \n", n);

    int k = 6;
    int item = la[k];

    printf("Linear Array before deletion: ");
    traverseArray(la,n);


    deleteItem(la, n, k, item);

    return 0;
}

void deleteItem(int* la, int n, int position, int item){
    int i = position;

    while(i<=n){
        la[i] = la[i+1];
        i = i + 1;
    }

    n = n - 1;

    printf("\nLinear Array after deletion: ");
    traverseArray(la,n);
    printf("\nThe size of LA after deletion: %d", n);
}

void traverseArray(int* la, int n){

    for(int i=0; i<n; i++){
        printf("%d ", la[i]);
    }

}

