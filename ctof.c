#include<stdio.h>

int main(){
    int celsius, fahrenheit;
    printf("enter the temperature in celsuis :");
    scanf("%d",& celsius);
    printf("temperature in fahrenheit : %d\n", fahrenheit = (celsius * 9/5) + 32);
    return 0;
}