#include<stdio.h>
enum birds {SPARROW, PEACOCK,PARROT};
enum animals{TIGER=8,LION,RABBIT,ZEBRA};
int main(){
   enum birds m=TIGER;
   int K;
   K= m;
   printf("%d\n",K);
   return 0;
}

