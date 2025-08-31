#include<stdio.h>

int main(){
    int i,n,t1= 0, t2=1, nextterm;
    printf("enter number :");
    scanf("%d", &n);

    printf("fibonacci series");

    for(i = 1; i <= n; i++){
        printf("%d\n", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;

        if(i<n){
            printf(" ");
        }
    }
    return 0;
}