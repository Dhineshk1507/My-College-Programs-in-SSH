#include <stdio.h>
#include <string.h>
int Cube(int n){
   int i,j;
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	 printf("* ");
      }
      printf("\n");
   }
}
int Triangle(int n){
   int i,j;
   for(i=0;i<n;i++){
      for(j=i;j<n;j++){
	 printf("* ");
      }
      printf("\n");
   }
}
int UprightIncrNumberTriangle(int n){
   int i,j;
   for(i=0;i<n;i++){
      for(j=n;j>i;j--){
	 printf(" ");
      }
      for(j=0;j<i;j++){
	 printf("%d",j);
      }
      for(j=i;j>=0;j--){
	 printf("%d",j);
      }
      printf("\n");
   }
}
int UprightDecrNumberTriangle(int n){
   int i,j;
   for(i=0;i<n;i++){
      for(j=n;j>i;j--){
	 printf(" ");
      }
      for(j=i;j>0;j--){
	 printf("%d",j);
      }
      for(j=0;j<=i;j++){
	 printf("%d",j);
      }
      printf("\n");
   }
}
int WeirdTriangle(int n){
   int i,j;
   for(i=0;i<n;i++){
      for(j=n;j>i;j--){
	 printf(" ");
      }
      for(j=i;j>0;j--){
	 printf("%d",n-j);
      }
      printf("0");
      for(j=1;j<=i;j++){
	 printf("%d",n-j);
      }
      printf("\n");
   }
}
void XSquare(char *Str){
   int i,j,n=strlen(Str);
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	 if(j==i || j==n-i-1){
	    printf("%c",Str[j]);
	 }
	 else{
	    printf(" ");
	 }
      }
      printf("\n");
   }
}                               
int main(){
   printf("Cube\n");
   Cube(5);
   printf("Triangle\n");
   Triangle(5);
   printf("Upright increasing Number Triangle\n");
   UprightIncrNumberTriangle(5);
   printf("Upright decreasing Number Triangle\n");
   UprightDecrNumberTriangle(5);
   printf("Weird Triangle\n");
   WeirdTriangle(5);
   printf("Cross Square\n");
   XSquare("12345");
   return 0;
}
