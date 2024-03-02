#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);//5 3 8
	if(a>=b)
	{
		if(a>=c)
		{
			printf("a=%d\n",a);
		}
		else
		{
			printf("c=%d\n",c);
		}
	}
	else if(a<=b)
	{
		if(b>=c)
		{
			printf("b=%d\n",b);
		}
		else
		{
			printf("c=%d\n",c);
		}
	}
	else if(a>=c)
	{
		if(a>=b)
		{
			printf("a=%d\n",a);
		}
		else
		{
			printf("b=%d\n",b);
		}
	}	
	else if(a<=c)
	{
			if(c>=b)
		{
			printf("c=%d\n",c);
		}
		else
		{
			printf("b=%d\n",b);
		}
	}
	else if(b>=c)
	{
		if(b>=a)
		{
			printf("b=%d\n",b);
		}
		else{
			printf("a=%d\n",a);
		}
	}
	else if(b<=c)
	{
		if(c>=a)
		{
			printf("c=%d",c);
		}
		else
		{
			printf("a=%d\n",a);
		}
	}
	}
		
}
