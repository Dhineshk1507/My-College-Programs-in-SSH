#include<stdio.h>
#include<string.h>
int main(){
   int l,c;
   char a[50],b[50];
   printf("enter string");
   scanf("%s",a);
   printf("enter choice");
   scanf("%d",&c);
   switch(c){
      case 1:
	 l=strlen(a);
	 printf("length %d",l);
	 break;
      case 2:
	 strcpy(b,a);
	 printf("original %s\n",a);
	 printf("copied %s",b);
	 break;
      case 3:
	 printf("enter string 2");
	 scanf("%s",b);
	 strcat(a,b);
	 printf("concated :%s",a);
	 break;
      case 4:
	 printf("enter string 2");
	 scanf("%s",b);
	 if(strcmp(a,b)==0){ printf("strings are equal"); }
	 else{ printf("string are not equal"); }
	 break;
      default:
	 printf("enter valid choice");
	 break;
   }
   return 0;
}
