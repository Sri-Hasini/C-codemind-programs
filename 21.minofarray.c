#include<stdio.h>
int main(){
    int n,min;
    scanf("%d",&n);
    int a[n],i;
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<=n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }printf("%d",min);
}
