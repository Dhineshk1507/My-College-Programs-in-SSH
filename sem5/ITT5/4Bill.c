#include<stdio.h>
int BillCalc(int Bill){
   int Cost;
   if(Bill>100 && Bill<=200){
      Cost+=(Bill-100)*3;
   }
   else if(Bill>200 && Bill<=300){
      Cost+=(Bill-200)*5+300;
   }
   else if(Bill>300 && Bill<400){
      Cost=Cost+(Bill-300)*8+800;
   }
   else if(Bill>400){
      Cost=Cost+(Bill-400)*10+1600;
   }
   return Cost;
}
int main(){
   int Bill;
   printf("Enter units consumed: ");
   scanf("%d",&Bill);
   printf("Total Cost: %d\n",BillCalc(Bill));
}
