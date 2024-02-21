#include <stdio.h>
int main()
{
	int eng,mat,phy,che,cs;
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
	if(eng>=35&&mat>=35&&phy>=35&&che>=35&&cs>=35)
	{
		printf("CONGRATS!YOU HAVE PASSED!");
	}
	else
	{
		printf("ALAS!YOU HAVE FAILED!");
	}
}
