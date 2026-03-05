#include<stdio.h>
#include<string.h>
int main(){
   char PASS[100];
   int count=0;
   if(strlen(PASS)>=8){
      for(i=0;i<strlen(PASS);i++){
	 switch(count){
	    case 0:
	       if(PASS[i]>=65 && PASS[i]<91){
		  count+=1;
		  break;
	       }
	    case 1:
	       if(PASS[i]>96 && PASS[i]<123){
		  count+=1;
		  break;
	       }
	    case 2:
	       if(PASS[i]>47 && PASS[i]<58){
		  count+=1;
		  break;
	       }

	 }

