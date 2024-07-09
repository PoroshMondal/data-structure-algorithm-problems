#include<stdio.h>
int main(){
    int la[10] = {8, 4, 19, 2, 7, 13, 5, 16, 50, 10};

    int n = sizeof(la) / sizeof(la[0]);

    printf("The size of LA: %d \n", n);

    int k = 6;
    int item = 111;

    printf("Linear Array before insertion: ");
    traverseArray(la,n);


    insertItem(la, n, k, item);

    return 0;
}

void insertItem(int* la, int n, int position, int item){
    int i = n;

    while(i>=position){
        la[i+1] = la[i];
        i = i - 1;
    }

    la[position] = item;

    n =n + 1;

    printf("\nLinear Array after insertion: ");
    traverseArray(la,n);
    printf("\nThe size of LA after insertion: %d", n);
}

void traverseArray(int* la, int n){

    for(int i=0; i<n; i++){
        printf("%d ", la[i]);
    }

}

