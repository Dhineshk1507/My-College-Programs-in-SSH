#include<iostream>
using namespace std;
class Num{
    int feet,inches;
    public:
    void GetData(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
        feet=feet+inches/12;
        inches=inches%12;
    }
    void Display(){
        cout<<feet<<"\'"<<inches<<"\""<<endl;
    }
    friend Num add(Num,Num);
};
Num add(Num A,Num B){
    Num temp;
    temp.feet=A.feet+B.feet;
    temp.inches=A.inches+B.inches;
    temp.feet=temp.feet+(temp.inches/12);
    temp.inches=temp.inches%12;
    return temp;
}
int main(){
    Num Ob1,Ob2;
    Ob1.GetData();
    Ob2.GetData();
    cout<<"DATA 1: ";
    Ob1.Display();
    cout<<"DATA 2: ";
    Ob2.Display();
    Num Result=add(Ob1,Ob2);
    cout<<"addition of 2 data: ";
    Result.Display();
    return 0;
}
