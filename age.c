#include<stdio.h>

int main(){
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age > 18){
        printf("they can drive");
    }
    else{
        printf("they can not drive");
    }
    return 0;
}