#include <stdio.h>
int main()
{
	int z;
	printf("Enter an integer :");
	scanf("%d",&z);
	
	if(z%2 == 0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}
