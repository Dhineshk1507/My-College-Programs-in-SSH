#include<stdio.h>
int Fibonacci(int n){
    if(n==0){
       return 0;
    }
    else if(n==1){
       return 1;
    }
    else
       return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
   int n,i=0;
   printf("Enter Number: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      printf("%d,",Fibonacci(i));
   }
   printf("...\n");
   return 0;
}
