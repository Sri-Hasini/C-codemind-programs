#include<stdio.h>
int main(){
    int a,b,i,j,j1,c=0,r;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        c=0,r=0;
        j=i;
        j1=i;
        while(j>0){
            r=j%10;
            if(j1==0||j1%r!=0){
                c=1;
                break;
            }
            j/=10;
        }
        if(c==0)printf("%d ",i);
    }
}
