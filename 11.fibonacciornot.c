#include<stdio.h>
int main(){
    int a,x=0,y=1,z,c=0,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        if(a==z)c=1;
        z=x+y;
        x=y;
        y=z;
    }
    if(c==1)printf("True");
    else printf("False");
}
