#include<stdio.h>
int main(){
    char s[101];
    int cnt=0,i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65&&s[i]<=90){
            cnt++;
        }
    }
    printf("%d ",cnt);
}
