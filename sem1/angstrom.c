#include<stdio.h>
int main(){
   int a1,a2,n,r;
   printf("enter number");
   scanf("%d",&a1);
   a2=a1;
   while(a1>0){
      n=a1%10;
      r+=n*n*n;
      a1/=10;
   }
   if(a2==r){ printf("it is angstrom"); }
   else{ printf("it is not angstrom"); }
   return 0;
}
