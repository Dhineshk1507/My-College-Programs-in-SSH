#include<stdio.h>
int main(){
   static i=1;
   printf("%d,",i++);
   if(i!=101)
      main();
   return 0;
}
