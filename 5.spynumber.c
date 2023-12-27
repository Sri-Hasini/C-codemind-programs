#include<stdio.h>
int main(){
    int a,r,sum=0,mul=1;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        sum+=r;
        mul*=r;
        a/=10;
    }
    if(sum==mul)printf("Spy Number");
    else printf("Not Spy Number");
}
