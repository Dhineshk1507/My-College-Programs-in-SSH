#include<stdio.h>
int main(){
   int sb1,sb2,sb3,sb4,sb5,sb6,avg;
   printf("enter subject1 mark");
   scanf("%d",&sb1);
   printf("enter subject2 mark");
   scanf("%d",&sb2);
   printf("enter subject3 mark");
   scanf("%d",&sb3);
   printf("enter subject4 mark");
   scanf("%d",&sb4);
   printf("enter subject5 mark");
   scanf("%d",&sb5);
   printf("enter subject6 mark");
   scanf("%d",&sb6);
   avg=(sb1+sb2+sb3+sb4+sb5+sb6)/6;
   printf("avg %d",avg);
   if(avg>=85&&avg<=100){ printf("grade A"); }
   else if(avg>=60&&avg<85){ printf("grade B"); }
   else if(avg>=40&&avg<60){ printf("grade C"); }
   else if(avg>=0&&avg<40){ printf("Fail"); }
   else{ printf("ERROR"); }
   return 0;
}
