#include<stdio.h>
int main(){
int fun(int n) {
if(n<=0)return 0; return fun(n-2) + 1;
}
printf("%d",fun(5));
}
