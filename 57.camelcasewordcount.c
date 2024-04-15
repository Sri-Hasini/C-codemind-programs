#include<stdio.h>
#include<string.h>
int main(){
    char s[1000],i,cnt=0;
    scanf("%[^\n]s",s);
    if(s[0]>=65&&s[0]<=90){
            cnt=0;
        }
        else
        {
            cnt=1;
        }
    for(i=0;i<strlen(s);i++){
        if(s[i]>=65&&s[i]<=90){
            cnt++;
        }
        
    }
    printf("%d",cnt);
}
