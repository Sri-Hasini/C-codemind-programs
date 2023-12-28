#include<stdio.h>
int main(){
    int a,rev=0,r;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        rev=rev*10+r;
        a/=10;
    }
    printf("%d",rev);
}
