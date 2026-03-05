#include<stdio.h>
int main(){
    char *Arr[100];
    int n,i,j;
    printf("Enter no. of names: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        Arr[i] = (char *)malloc(n*sizeof(char));
    }
    for(i=0;i<n;i++){
        scanf("%s",&Arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;Arr[i][j]!='\0';j++){
            printf("%c",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
