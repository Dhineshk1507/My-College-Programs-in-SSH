#include<stdio.h>
union employee{
   char name[20];
   int empno;
   int bp;
};
int main(){
   int i,n;
   float ts;
   union employee c[60];
   printf("enter no of employees");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      printf("\nenter name ");
      scanf("%s",c[i].name);
      printf("enter no ");
      scanf("%d",&c[i].empno);
      printf("enter pay ");
      scanf("%d",&c[i].bp);
   }
   for(i=0;i<n;i++){
      ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
      printf("\nemployee details are: ");
      printf("\ntotal %f",ts);
   }
}
