#include<stdio.h>
int main(){
    int  a,r,c;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        c++;
        a/=10;
    }
    printf("%d",c);
}
