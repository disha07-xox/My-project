#include<stdio.h>

int main(){
    int num=1;
    printf("enter a number :");
    scanf("%d", & num);

    if(num >= 1){
        printf("it is a natural number\n");
    } else {
        printf("it is not a natural number\n");
    }
    return 0;
}