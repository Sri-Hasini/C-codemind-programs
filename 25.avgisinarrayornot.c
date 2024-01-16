#include<stdio.h>
int main(){
    int n,i,g=0;
    int avg,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(avg==a[i]){
            g=1;
        }
    }
    if(g==1)printf("True");
    else printf("False");
}
