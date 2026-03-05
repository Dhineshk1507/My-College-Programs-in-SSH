#include<stdio.h>
int main(){
   char c,Mat[5][5];
   int i,j;
   printf("Enter:\n");
   for(i=0;i<5;i++){
      for(j=0;j<5;j++){
	 if(i==4 && j==4){ continue; }
	 scanf(" %c",&Mat[i][j]);
      }
   }
   Mat[4][4]='\a';
   for(i=0;i<5;i++){
      for(j=0;j<5;j++){
	 printf("%c ",Mat[i][j]);
      }
      printf("\n");
   }
   return 0;
}
