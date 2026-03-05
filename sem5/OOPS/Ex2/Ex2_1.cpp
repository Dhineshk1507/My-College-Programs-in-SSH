#include<iostream>
using namespace std;
class Integer
{
   int Number,count;
   int *Arr;
   public:
   Integer();
   void Count();
   void Convert();
   void Display();
   ~Integer();
};
Integer::Integer(){
   cout<<"Enter an integer: ";
   cin>>Number;
}
void Integer::Count(){
   count=0;
   int Temp=Number;
   while(Temp!=0){
      Temp=Temp/10;
      count++;
   }
   cout<<"count: "<<count<<endl;
   Arr=new int[count];
   cout<<"Memory Created"<<endl;
}
void Integer::Convert(){
   int i,Temp=Number;
   for(i=count-1;i>=0;i--){
      Temp=Number%10;
      Arr[i]=Temp;
      Number=Number/10;
   }
}
void Integer::Display(){
   int i;
   for(i=0;i<count;i++){
      cout<<Arr[i]<<endl;
   }
}
Integer::~Integer(){
   delete[] Arr;
   cout<<"Memory freed"<<endl;
}
int main(){
   Integer N1;
   N1.Count();
   N1.Convert();
   N1.Display();
   return 0;
}
