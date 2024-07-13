#include<stdio.h>
int main(){

    // demo array element
    // int la[8] = {32,51, 27, 85, 66, 23,13,57};

    int la[100], n, searchItem, loc;

    printf("Enter the number of elements(N): ");
    scanf("%d",&n);

    printf("Enter the elements(N): ");

    for(int i=1; i<=n; i++){
        scanf("%d",&la[i]);
    }

    n = sizeof(la) / sizeof(la[0]);

    printf("Enter the search item: ");
    scanf("%d",&searchItem);

    la[n+1]=searchItem;

    loc = 1;
    while(loc<=n && la[loc]!=searchItem ){
        loc++;
    }

    if(loc == n+1){
        loc = 0;
        printf("This %d element is not present in the Linear Array\n", searchItem);
    }else{
         printf("This %d element is present in the Linear Array of location: %d", searchItem, loc);
    }

    //printf("Loc: %d", loc);

    return 0;
}
