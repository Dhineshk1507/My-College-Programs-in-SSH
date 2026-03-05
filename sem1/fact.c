#include<stdio.h>
int fact(int);
int main(){
   int f,n;
   printf("enter number");
   scanf("%d",&n);
   f=fact(n);
   printf("factorial of %d is %d",n,f);
}
int fact(n){
   int temp;
   if(n==0){
      return 1;
   }
   else{ temp=n*fact(n-1); }
   return temp;
}
