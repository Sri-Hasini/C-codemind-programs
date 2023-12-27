#include<stdio.h>
int main(){
    int a,b,i,sum=0,sum1=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=(a/2);i++){
        if(a%i==0){
            sum+=i;
        }
    }
    for(i=1;i<=(b/2);i++){
        if(b%i==0){
            sum1+=i;
        }
    }
    if(sum==b&&sum1==a)printf("Amicable");
    else printf("Not Amicable");
}
