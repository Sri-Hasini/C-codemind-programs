#include<stdio.h>
int main(){
    int a,r,big=0;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        if(big<r)big=r;
        a/=10;
    }
    printf("%d",big);
}
