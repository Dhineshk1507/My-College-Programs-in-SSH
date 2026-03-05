#include<stdio.h>
void complx(int,int,int,int);
void main(){
   int x1,x2,y1,y2;
   printf("enter real and imaginary part of c1");
   scanf("%d%d",&x1,&y1);
   printf("enter real and complex part of c2");
   scanf("%d%d",&x2,&y2);
   complx(x1,x2,y1,y2);
}
void complx(int a,int b,int c,int d){
   int e,f;
   e=a+b;
   f=c+d;
   printf("c1 + c2 = %d+%di",e,f);
}
