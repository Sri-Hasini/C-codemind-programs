//CP,SP in 3 conditions
#include <stdio.h>
int main()
{   int cp,sp,l,p;
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
	printf("LOSS");
	}
	else if(cp<sp)
	{
		printf("PROFFIT");
	}
	else
	{
		printf("NEITHER PROFIT NOR LOSS");
	}
}
