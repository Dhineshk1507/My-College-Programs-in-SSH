#include<iostream>
using namespace std;
template<class T>
class Matrix{
   T M[3][3];
   public:
   Matrix(){
      int i,j;
      for(i=0;i<3;i++){
	 for(j=0;j<3;j++){
	    M[i][j]=0;
	 }
      }
   }
   void GetData(){
      int i,j;
      T n;
      cout<<"Enter elements: ";
      for(i=0;i<3;i++){
	 for(j=0;j<3;j++){
	    cin>>n;
	    M[i][j]=n;
	 }
      }
   }
   Matrix Add(Matrix<T> B){
      Matrix<T> temp;
      int i,j;
      for(i=0;i<3;i++){
	 for(j=0;j<3;j++){
	    temp.M[i][j]=M[i][j]+B.M[i][j];
	 }
      }
      return temp;
   }
   Matrix Multiply(Matrix<T> B){
      int i,j,t,m=0;
      Matrix<T> temp;
      for(t=0;t<3;t++){
	 for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	       temp.M[i][t]+=(M[i][j]*B.M[j][t]);
	    }
	 }
      }
      return temp;
   }
   void Display(){
      int i,j;
      for(i=0;i<3;i++){
	 for(j=0;j<3;j++){
	    cout<<M[i][j]<<" ";
	 }
	 cout<<endl;
      }
   }
};
int main(){
   Matrix<int> m1,m2,Result1;
   Matrix<float> m3,m4,Result2;
   m1.GetData();
   Result1=m1.Multiply(m1);
   Result1.Display();
   m3.GetData();
   Result2=m3.Multiply(m3);
   Result2.Display();
   return 0;
}
