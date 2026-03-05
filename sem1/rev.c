#include<stdio.h>
int main(){
   int a1,a2,r;
   printf("enter number");
   scanf("%d",&a1);
   a2=a1;
   while(a1>0){
      r=r*10+(a1%10);
      a1/=10;
   }
   printf("reverse of %d = %d",a2,r);
   return 0;
}
