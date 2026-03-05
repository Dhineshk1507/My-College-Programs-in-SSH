#include<stdio.h>
int main(){
   int a,b;
   printf("enter a value ");
   scanf("%d",&a);
   printf("intial value: a=%d b=%d\n\n",a,b);

   a++;
   printf("after a++,     a=%d\n",a);
   ++a;
   printf("after ++a,     a=%d\n",a);
   a--;
   printf("after a--,     a=%d\n",a);
   --a;
   printf("after --a,     a=%d\n",a);
   b=a++;
   printf("after b=a++,   a=%d b=%d\n",a,b);
   b=++a;
   printf("after b=++a,   a=%d b=%d\n",a,b);
   b=a--;
   printf("after b=a--,   a=%d b=%d\n",a,b);
   b=--a;
   printf("after b=--a,   a=%d b=%d\n",a,b);
}
