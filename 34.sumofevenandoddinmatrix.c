#include<stdio.h>
int main(){
    int i,j,sum=0,sum1=0,n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]%2==0)sum+=a[i][j];
            else sum1+=a[i][j];
        }
    }
    printf("%d %d",sum,sum1);
}
