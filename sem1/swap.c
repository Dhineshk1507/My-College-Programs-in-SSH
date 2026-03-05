//swapping numbers
#include<stdio.h>
int main(){
   int a,b,temp;
   printf("enter a,b values ");
   scanf("%d%d",&a,&b);
   printf("before swap\n a=%d b=%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("after swap\n a=%d b=%d\n",a,b);
   return 0;
}
