#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j<=n;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
}
