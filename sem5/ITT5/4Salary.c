#include<stdio.h>
float CalSal(float Basic){
   printf("HRA: %f\n",(0.2*Basic));
   printf("DA: %f\n",(0.8*Basic));
   float Gross=Basic+(0.2*Basic)+(0.8*Basic);
   printf("Gross: %f\n",Gross);
   float Deduction=(0.12*((Basic*0.8)+Basic))+(0.1*Basic);
   printf("Tax: %f\n",(Basic*0.1));
   printf("Deduction: %f\n",Deduction);
   return (Gross-Deduction);
}
int main(){
   int ID;
   float Basic;
   printf("Enter ID: ");
   scanf("%d",&ID);
   printf("Enter Basic Salary: ");
   scanf("%f",&Basic);
   printf("Employee ID: %d\n",ID);
   float Net=CalSal(Basic);
   printf("Net Salary: %f\n",Net);
}
