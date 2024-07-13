#include<stdio.h>
int main(){

    int n, searchItem, loc;

    int la[8] = {32,51, 27, 85, 66, 23,13,57};

    printf("Enter the number of elements(N): ");
    //scanf("%d",&n);

    printf("Enter the elements(N): ");

    //for(int i=0; i<n; i++){
      //  scanf("%d",&la[i]);
    //}

    n = sizeof(la) / sizeof(la[0]);
    searchItem = 99;


    la[n+1]=searchItem;

    loc = 1;
    while(loc<=n && la[loc]!=searchItem ){
        loc++;
    }

    if(loc == n+1){
        printf("This %d element is not present in the Linear Array\n", searchItem);
    }else{
         printf("This %d element is present in the Linear Array of location: %d", searchItem, loc+1);
    }

    //printf("Loc: %d", loc);

    return 0;
}
