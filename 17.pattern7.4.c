#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    printf("\n");
    for(i=n-1;i>=0;i--){
        for(k=n-2;k>=i;k--){
            printf(" ");
        }
        for(j=i;j>=0;j--){
            printf("%c ",i+65);
        }
        printf("\n");
    }
}
