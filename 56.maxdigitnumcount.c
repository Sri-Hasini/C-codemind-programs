#include<stdio.h>
int main(){
    int n,m,i,r,cnt=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    for(i=0;i<n;i++){
        while(a[i]!=0){
            r=a[i]%10;
            cnt++;
            a[i]/10;
        }
        b[i]=cnt;
        cnt=0;
    }
    int x;
    for(i=0;i<n;i++){
        if(max<=b[i]){
            max=b[i];
        
        }
    }
    printf("%d ",max);
}
