#include<stdio.h>
int main(){
   int x,y,*a,*b,temp;
   printf("enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("before swap: x=%d, y=%d\n",x,y);
   a=&x;
   b=&y;
   temp=*b;
   *b=*a;
   *a=temp;
   printf("after swap: x=%d, y=%d",x,y);
   return 0;
}
