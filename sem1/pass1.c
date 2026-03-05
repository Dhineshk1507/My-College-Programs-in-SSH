#include<stdio.h>
int main(){
   char a[50]={"password"},b[50];
   int i=0,flag=0;
   printf("enter password");
   scanf("%s",b);
   while(a[i]!='\0'&&b[i]!='\0'){
      if(a[i]!=b[i]){
	 flag=1;
	 break;
      }
      i++;
   }
   if(flag==0){ printf("Correct password"); }
   else{ printf("incorrect password"); }
   return 0;
}
