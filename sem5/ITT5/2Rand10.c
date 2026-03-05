#include<stdio.h>
#include<stdlib.h>
int main(){
   int i;
   printf("Enter 10digit Number: ");
   scanf("%d",&i);
   if((i%10)%2==0){
      if((i%3)%2==0){
	 if(i%10==0){
	    printf("%d is such a number\n",i);
	 }
      }
   }
   else { printf("%d is not such a number\n",i); }
}
