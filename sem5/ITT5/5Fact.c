#include<stdio.h>
int factorial(int n){
   int i;
   if(n==0){
      return 1;
   }
   else
      i=n*factorial(n-1);
   return i;
}
int main(){
   int n;
   printf("Enter number: ");
   scanf("%d",&n);
   printf("%d! = %d\n",n,factorial(n));
   return 0;
}
