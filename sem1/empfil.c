#include<stdio.h>
void main(){
   FILE *fptr;
   char name[20];
   int age;
   float salary;
   fptr=fopen("emp.rec","w");
   if(fptr==NULL){
      printf("file does not exists \n");
      return;
   }
   printf("enter the name");
   scanf("%s",name);
   fprintf(fptr,"name=%s\n",name);
   printf("enter the age");
   scanf("%d",&age);
   fprintf(fptr,"age=%d\n",age);
   printf("enter the salary");
   scanf("%f",&salary);
   fprintf(fptr,"salary=%.2f\n",salary);
   fclose(fptr);
}
