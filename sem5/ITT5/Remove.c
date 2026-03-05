#include<stdio.h>
#include<string.h>
void Remove(char* Arr){
   int i,j,count=0,found=0;
   char temp[100];
   for(i=0;Arr[i]!='\0';i++){
      found=0;
      for(j=0;j<count;j++){
	 if(temp[j]==Arr[i]){
	    found=1;
	    break;
	 }
      }
      if(!found){ temp[count]=Arr[i]; count++; }
   }
   temp[count]='\0';
   printf("%s\n",temp);
}
int main(){
   char Str[100];
   printf("Enter string: ");
   scanf("%s",Str);
   Remove(Str);
   return 0;
}
