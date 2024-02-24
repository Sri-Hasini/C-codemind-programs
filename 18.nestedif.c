#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	//Nested if!
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is largest",a);
		}
		else
		{
			printf("%d is largest",b);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is largest",b);
		}
		else
		{
			printf("%d is largest",c);
		}
	}
}
