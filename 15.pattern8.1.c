#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(i+j==n-1||i==j)
            printf("%d ",i+1);
            else
            printf(" ");
        }
        printf("\n");
    }
}
