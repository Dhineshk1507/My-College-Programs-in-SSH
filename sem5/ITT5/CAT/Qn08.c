#include<stdio.h>
int x = 0;
int f ()
{
if (x == 0) return x+1;
else return x-1;
}
int g()
{
return x++;
 
}
int main()
{
int i=(f()+g());
int j =g()|(f() +g());
printf("%d%d",i,j);
}

