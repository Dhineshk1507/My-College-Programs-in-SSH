#include<stdio.h>
int main(){
   float d,t,v,a;
   printf("enter distance ");
   scanf("%f",&d);
   printf("enter time ");
   scanf("%f",&t);
   v=d/t;
   a=v/t;
   printf("velocity = %f\nacceleration = %f",v,a);
   return 0;
}
