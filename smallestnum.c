#include<stdio.h>

int main(){
    int num1, num2;

    printf("enter the first number :");
    scanf("%d", &num1);

    printf("enter the second number :");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("the smallest number is : %d\n", num1);
    }
    else {
        printf("the smallest number is : %d\n", num2);
    }
    return 0;
}