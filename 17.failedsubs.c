#include <stdio.h>
int main()
{
	int eng,mat,phy,che,cs;
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
	if(eng<35)
	{
	printf("Failed in english\n");
    }
    else
    {
    	printf("passed in english\n");
	}
    if(mat<35)
    {
    	printf("failed in maths\n");
	}
	else
	{
		printf("passed in maths\n")
	}
	if(phy<35)
	{
		printf("failed in physics\n");
	}
	else
	{
		printf("passed in physics\n")
	}
	if(che<35)
	{
		printf("failed in chemistry\n");
	}
	else
	{
		printf("passed in chemistry\n");
	}
	if(cs<35)
	{
		printf("failed in computer science\n");
	}
	else
	{
		printf("passed in computer science");
	}
	
	
	
	
}
