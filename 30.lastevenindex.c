#include<stdio.h>
int main(){
    int n,g=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            g=i;
        }
    }printf("%d",g);
}
