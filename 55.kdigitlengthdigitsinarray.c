#include<stdio.h>
int main(){
    int n,m,r=0,i,cnt=0,cnt1=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        while(a[i]!=0){
            r=a[i]%10;
            cnt++;
            a[i]=a[i]/10;
        }
        if(cnt==m){
            cnt1++;
        }
         cnt=0;
    }
	if(m==0)printf("0");
	else printf("%d ",cnt1);
}

