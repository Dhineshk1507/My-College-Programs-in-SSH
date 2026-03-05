#include<iostream>
#include<cstring>
using namespace std;
class STR{
	char *Arr;
	public:
	STR(char *temp){
		Arr=new char(strlen(temp));
		strcpy(Arr,temp);
	}
	STR operator-(char Reduce){
		int i;
		STR temp(Arr);
		for(i=0;Arr[i]!=0;i++){
			if(temp.Arr[i]==Reduce){
				temp.Arr[i]=' ';
			}
		}
		return temp;
	}
	void Display(){
		cout<<Arr<<endl;
	}
	~STR(){ delete[] Arr; }
};
int main(){
	STR A1("dovahkiin");
	A1.Display();
	STR A2=A1-'i';
	A2.Display();
	return 0;
}
