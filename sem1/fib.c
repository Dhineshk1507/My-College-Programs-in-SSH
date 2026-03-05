#include<stdio.h>
int main(){
   int a=0,b=1,c,i,n;
   printf("enter limit");
   scanf("%d",&n);
   printf("%d,%d,",a,b);
   for(i=1;i<n;i++){
      c=a+b;
      a=b;
      b=c;
      printf("%d,",c);
   }
   printf("...");
   return 0;
}
