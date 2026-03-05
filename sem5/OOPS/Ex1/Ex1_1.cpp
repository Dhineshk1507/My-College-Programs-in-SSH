#include<iostream>
using namespace std;
class Car{
   private:
      string Brand;
      string Model;
      int Year;
      int Price;
   public:
      Car(){
	 cout<<"Enter Brand: ";
	 cin>>Brand;
	 cout<<"Enter Model: ";
	 cin>>Model;
	 cout<<"Enter Year: ";
	 cin>>Year;
	 cout<<"Enter Price: ";
	 cin>>Price;
      }
      void Display(){
	 cout<<"Brand: "<<Brand<<endl;
	 cout<<"Model: "<<Model<<endl;
	 cout<<"Year: "<<Year<<endl;
	 cout<<"Price: "<<Price<<endl;
      }
      ~Car(){ cout<<"Destructor"<<endl; }
};
int main(){
   Car c1,c2;
   c1.Display();
   c2.Display();
   return 0;
}
