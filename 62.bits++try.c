#include<stdio.h>
int main(){
    int n,cnt=0,i;
    scanf("%d",&n);
    char s[4];
    for(i=0;i<n;i++){
        scanf("%s",s);
        if(s[0]=='+')++cnt;
        else if(s[3]=='+')cnt++;
        else if(s[0]=='-')--cnt;
        else cnt--;
    }
    printf("%d",cnt);
}
