#include<stdio.h>
#include<string.h>
int main(){
   char Org[100];
   printf("Enter string: ");
   scanf("%s",Org);
   char Dup[strlen(Org)];
   strcpy(Dup,Org);
   int i,count=0;
   for(i=0;i<strlen(Org);i++){
      if(Org[i]=='a' || Org[i]=='e' || Org[i]=='i' || Org[i]=='o' || Org[i]=='u'){
	      count++;
      }
   }
   printf("Copied string: %s\n",Dup);
   printf("No. of Vowels: %d\n",count);
   return 0;
}
