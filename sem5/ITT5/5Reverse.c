#include<stdio.h>
#include<string.h>
char Reverse(char *A){
   if(*A){
      Reverse(A+1);
      printf("%c",*A);
   }
}
int main(){
   char A[100];
   printf("Enter String: ");
   scanf("%s",A);
   Reverse(A);
   printf("\n");
   return 0;
}
