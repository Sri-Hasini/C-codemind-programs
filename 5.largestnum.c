#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d\n%d",&a,&b);
	if(a>b)
	{
		printf("%d is largest",a);
	}
	else if(a<b)
	{
		printf("%d is largest",b);
	}
	else
	{
		printf("Both are equal!");
	}
}
