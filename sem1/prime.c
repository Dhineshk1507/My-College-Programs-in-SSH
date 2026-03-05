#include<stdio.h>
int main(){
   int a,i,t=0;
   printf("enter number");
   scanf("%d",&a);
   for(i=2;i<a;i++){
      if(a%i==0){ t=1; break; }
   }
   if(t==0){
      printf("%d is prime number",a);
   }
   else{
      printf("%d is not prime number",a);
   }
   return 0;
}
