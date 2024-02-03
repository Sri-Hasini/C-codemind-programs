#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("POSITIVE!");
	}
	else if(a<0)
	{
		printf("NEGATIVE!");
	}
	else
	{
		printf("NEITHER POSITIVE NOR NEGATIVE!");
	}
}
