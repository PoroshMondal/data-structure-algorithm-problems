#include<stdio.h>
int main(){

    //int la[100], LB, UB, n, LOC;
    int BEG, END, n, searchItem, LOC = 0;

    int la[] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
    n = sizeof(la) / sizeof(la[0]);
    searchItem = 22;

    BEG = 0;
    END = n - 1;

    binarySearchItem(la, BEG, END, searchItem, LOC);

    return 0;
}

void binarySearchItem(int*la, int BEG, int END, int searchItem, int LOC){

    int MID = (BEG + END)/2;

    while(BEG<=END && la[MID]!=searchItem){
        if(searchItem<la[MID]){
            END = MID - 1;
        }else {
            BEG = MID + 1;
        }

        MID = (BEG + END)/2;

    }

    if(la[MID]==searchItem){
        LOC = MID;
        printf("This %d element is present in the DATA in the location of Linear Array: %d \n", searchItem, LOC);
    }else {
        LOC = 0;
        printf("This %d element is not present in the DATA of Linear Array\n", searchItem);
    }



}
