#include<stdio.h>
int main(){
    int *ptr;
    int Arr[10],i;
    ptr=Arr;
    printf("Enter Array: ");
    for(i=0;i<10;i++){
        scanf("%d",&ptr[i]);
    }
    printf("the OUTPUT is: ");
    for(i=0;i<10;i++){
        if(ptr[i]%2==0)
            printf("%d\n",ptr[i]);
    }
    return 0;
}
