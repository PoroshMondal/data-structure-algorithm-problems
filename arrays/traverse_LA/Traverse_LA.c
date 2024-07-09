#include<stdio.h>

int main(){

    // la means Linear Array
    int la[8] = {8, 4, 19, 2, 7, 13, 5, 16};

    traverseArray(la);

    return 0;
}

void traverseArray(int* la){

    for(int i=0; i<8; i++){
        printf("%d ", la[i]);
    }

}
