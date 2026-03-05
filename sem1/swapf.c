#include<stdio.h>
void swap(int,int);
void main(){
   int a=10,b=20;
   printf("before swap main a=%d,b=%d\n",a,b);
   swap(a,b);
   printf("after swap main a=%d,b=%d\n",a,b);
}
void swap(a,b){
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("after swap function a=%d,b=%d\n",a,b);
}
