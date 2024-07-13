#include<stdio.h>
int main(){

    int la[100], PTR, k, n, temp;

    printf("Enter the number of elements(N): ");
    scanf("%d",&n);

    printf("Enter the elements(N): ");

    for(int i=0; i<n; i++){
        scanf("%d",&la[i]);
    }

    for(k=0; k<n-1; k++){
        PTR = 0; //Initialize the pass pointer
        while(PTR<=n-k){

            if(la[PTR]>la[PTR+1])
            {
                temp = la[PTR];
                la[PTR] = la[PTR+1];
                la[PTR+1] = temp;
            }

            PTR++;
        }
    }

    printf("Sorted list(Bubble Sort) in ascending order:\n");

    for(int i=0; i<n; i++){
        printf("%d  ",la[i]);
    }

    // (n-k) means each passes
    // if n=8 the total passes are 7
    // But to sort data a single pass has multiple passes
    // For example in First passes, In Pass 1, It will need to compare he number with each other and it will 7 pass
    // in Pass 2, it will have 6 passes.

    return 0;
}
