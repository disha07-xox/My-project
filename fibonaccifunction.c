#include<stdio.h>

int fibonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);    

    }

    int main(){
        int n;
        printf("Enter the term number :");
        scanf("%d", &n);

        printf("%d term of fibonacci seqence is : %d\n", n, fibonacci(n));
        return 0;
    }
