#include<stdio.h>

int main(){
    float num1, num2, num3;
    printf("enter first number");
    scanf("%f",& num1);
    printf("enter second number");
    scanf("%f",& num2);
    printf("enter third number");
    scanf("%f",& num3);

    printf("%f", (num1 + num2 + num3)/3);
    return 0;
}