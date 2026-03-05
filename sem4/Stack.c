#include<stdio.h>
#define N 5
int top=-1;
int S[N];
int push(int elt)
{
   top=top+1;
   S[top]=elt;
}
int display()
{
   int temp
   for(temp=top;temp>0;temp--){
      print("%d",S[temp]);
   }
}
int main(){
   int elt;
   print("Enter Element");
   scanf("%d",&elt);
   push(elt);
   display();
}

