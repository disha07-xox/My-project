#include<stdio.h>

int main(){
    int num1,num2;
    printf("enter first number :");
    scanf("%d", &num1);
    printf("enter second number :");
    scanf("%d", &num2);

    if(num2 < num1){
        printf("%d is a greater number\n ", num1);
    }else {
        if(num1 < num2 ){
            printf("%d is a greater number\n ", num2);
        } else {
            printf("equal number\n");
        }
    }
    return 0;
}