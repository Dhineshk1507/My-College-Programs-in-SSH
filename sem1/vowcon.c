#include<stdio.h>
int main(){
   char vowcon;
   printf("enter character");
   scanf("%c",&vowcon);
   switch(vowcon){
      case 'a': printf("%c is vowel",vowcon); break;
      case 'e': printf("%c is vowel",vowcon); break;
      case 'i': printf("%c is vowel",vowcon); break;
      case 'o': printf("%c is vowel",vowcon); break;
      case 'u': printf("%c is vowel",vowcon); break;
      default : printf("%c is consonant",vowcon);
   }
}
