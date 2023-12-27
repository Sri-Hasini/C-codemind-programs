#include<stdio.h>
#include<math.h>
int main(){
    int a,sum=0,r;
    scanf("%d",&a);
    int s=a*a;
    while(s>0){
        r=s%10;
        sum+=r;
        s/=10;
    }
    if(sum==a)printf("Neon Number");
    else printf("Not Neon Number");
}
