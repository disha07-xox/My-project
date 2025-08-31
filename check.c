#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks :");
    scanf("%d", & marks);

    if(marks <= 30){
        printf("FAIL");
    }
    else if (marks >= 30 && marks <= 100){
        printf("PASS");
    }
    else {
        printf("Wrong marks");
    }
    return 0;
}