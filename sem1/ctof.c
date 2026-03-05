//celsius to farenheit
#include<stdio.h>
int main(){
   float F,C;
   printf("enter value in celcius ");
   scanf("%f",&C);
   F=(C*(9/5))+32;
   printf("farenheit = %f",F);
   return 0;
}
