#include<iostream>
using namespace std;
class Books{
   private:
      string Title;
      int AccessNo;
      int Price;
      int Copies;
   public:
      Books(){
	 Title="";
	 AccessNo=0;
	 Price=0;
	 Copies=0;
      }
      void IncBooks(){
	 cout<<"Enter Title: ";
	 cin>>Title;
	 cout<<"Enter AccessNo: ";
	 cin>>AccessNo;
	 cout<<"Enter Price: ";
	 cin>>Price;
	 cout<<"Enter Copies: ";
	 cin>>Copies;
      }
      int GetPrice(){
	 return (Price*Copies);
      }
};
int main(){
   Books b1,b2;
   b1.IncBooks();
   b2.IncBooks();
   cout<<"Total Worth: "<<(b1.GetPrice()+b2.GetPrice())<<endl;
   return 0;
}
