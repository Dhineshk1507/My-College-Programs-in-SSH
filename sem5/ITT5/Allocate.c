#include<stdio.h>
int main(){
    int n,i;
    float *ptr,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr = (float *)malloc(n*sizeof(float));
    printf("Enter Elements: ");
    for(i=0;i<n;i++){
        scanf("%f",&ptr[i]);
        temp+=ptr[i];
    }
    printf("Average: %f",temp/n);
    return 0;
}
