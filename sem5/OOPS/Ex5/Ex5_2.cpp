#include<iostream>
using namespace std;
class NumB;
class NumA{
    int num1;
    friend class NumB;
    public:
    void GetData(){
        cout<<"Enter number: ";
        cin>>num1;
    }
};
class NumB{
    int num2;
    public:
    void GetData(){
        cout<<"Enter number: ";
        cin>>num2;
    }
    void Average(NumA tempA){
        cout<<"Average: "<<(num2+tempA.num1)/2<<endl;
    }
    void Max(NumA tempA){
        if(num2>tempA.num1) cout<<"Max: "<<num2<<endl;
        else cout<<"Max: "<<tempA.num1<<endl;
    }
};
int main(){
    NumA A1;
    A1.GetData();
    NumB B1;
    B1.GetData();
    B1.Max(A1);
    B1.Average(A1);
    return 0;
}
