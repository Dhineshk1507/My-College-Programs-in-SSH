#include<stdio.h>
int Reverse(int A){
   int Rev=0;
   while(A>0){
      Rev=Rev*10+(A%10);
      A/=10;
   }
   return Rev;
}    
int IsPalindrome(int A){
   int Rev=0;
   int Temp=A;
   while(A>0){
      Rev=Rev*10+(A%10);
      A/=10;
   }
   if(Temp==Rev){ return 1; }
   else { return 0; }
}
int main(){
   int Num,i;
   printf("Enter Number: ");
   scanf("%d",&Num);
   if(IsPalindrome(Num)==1){ printf("Result: %d at iteration 0\n",Num); }
   else{
      for(i=1;i<=5;i++){
	 Num=Num+Reverse(Num);
	 if(IsPalindrome(Num)==1){
	    printf("Palindrome %d at iteration %d\n",Num,i);
	    break;
	 }
	 else{ printf("Not Palindrome at iteration %d\n",i); }
      }
   }
}
