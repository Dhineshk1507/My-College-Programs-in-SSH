#include<stdio.h>
int main(){
   int a;
   printf("enter age ");
   scanf("%d",&a);
   (a>=18)?printf("eligible for voting"):printf("not eligible for voting");
   return 0;
}
