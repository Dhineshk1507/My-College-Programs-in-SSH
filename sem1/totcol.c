#include<stdio.h>
struct college{
   char state[20];
   int e;
   int m;
   int md;
   int s;
};
int main(){
   int i,n,j,max,temp,tc[206],at,k,a[20]={0,1,2,3,4,5,6,7,8,9,10};
   struct college c[20];
   printf("enter no.\t");
   scanf("%d",&n);
   printf("enter state & no of col\t");
   for(i=0;i<n;i++){
      scanf("%s",c[i].state);
      scanf("%d%d%d%d",&c[i].e,&c[i].m,&c[i].md,&c[i].s);
   }
   for(i=0;i<n;i++){
      tc[i]=c[i].e+c[i].md+c[i].m+c[i].s;
      printf("%s has %d colleges\n",c[i].state,tc[i]);
   }
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
	 if(tc[i]>tc[j]){
	    temp=tc[i];
	    tc[i]=tc[j];
	    tc[j]=temp;
	    at=a[i];
	    a[j]=a[i];
	    a[j]=at;
	 }
	 max=tc[j];
	 k=a[j];
      }
   }
   printf("\n max no of col is %d in %s",max,c[k].state);
   return 0;
}
