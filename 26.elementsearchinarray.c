#include<stdio.h>
int main(){
    int n,i,g=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k==a[i]){
            g=1;
        }
    }
    if(g==1)printf("True");
    else printf("False");
}
