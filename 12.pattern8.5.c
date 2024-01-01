#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(i+j==n-1||i==j)
            printf("%c",c[i]);
            else
            printf(" ");
        }
        printf("\n");
    }
}
