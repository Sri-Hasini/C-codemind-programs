#include<stdio.h>
int main(){
	int a,sum=0,sum1=0,r,n;
	scanf("%d",&a);
	n=a;
	while(a>0){
		r=a%10;
		sum=r;
		a/=10;
	}
	while(n>0){
		r=n%10;
		sum1=r;
		n/=10;
		break;
	}
	printf("%d",(sum+sum1));
}
