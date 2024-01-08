#include<stdio.h>
int main(){
    int a,sum=0,i;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        sum+=n[i];
    }
    printf("%d",sum);
}
