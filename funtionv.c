#include<stdio.h>

void calculateprice(float value);

int main(){
float v;
printf("enter value : ");
scanf("%f", &v);
calculateprice(v);

return 0;
}

void calculateprice(float value){
value= value + (0.18 * value);
printf("final price %f\n", value );
}