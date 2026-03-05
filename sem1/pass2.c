#include<stdio.h>
int main(){
   char a[50]={'p','a','s','s','w','o','r','d'},b[50];
   int i=0;
   static int flag=0;
   printf("enter password ");
   scanf("%s",b);
   while((a[i]!='\0')&&(b[i]!='\0')){
	 if(a[i]!=b[i]){
	    flag+=1;
	    break;
	 }
	 else{ flag=0; }
	 i++;
   }
   if(flag==0){ printf("Correct password"); }
   else if(flag>0&&flag<3){ printf("incorrect, try again\n"); main(); }
   else if(flag==3){ printf("max attempt reached"); }
   return 0;
}
