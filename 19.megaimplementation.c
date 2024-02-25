//MEGA IMPLEMENTATION
#include<stdio.h>
int main()
{
	int eng,mat,phy,che,cs;
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
	if(eng>=35&&mat>=35&&phy>=35&&che>=35&&cs>=35)
	{
		printf("PASS\n");
		float total,per;
		total=eng+mat+phy+che+cs;
		printf("Total marks:%.2f\n",total);
		per=total/5;
		printf("Percentage:%.2f\n",per);
		if(per>=90)
		{
			printf("O grade!");
		}
		else if(80<=per&&per<90)
		{
			printf("A grade!");
		}
		else if(70<=per&&per<80)
		{
			printf("B grade");
		}
		else if(60<=per&&per<70)
		{
			printf("C grade!");
		}
		else if(50<=per&&per<60)
		{
			printf("D grade!");
		}
		else if(35<=per&&per<50)
		{
			printf("E grade");
		}
		
	}
	else
	{
		printf("FAIL\n");
		if(eng<35)
		{
			printf("FAILED IN ENGLISH\n");
		}
		if(mat<35)
		{
			printf("FAILED IN MATHS\n");
		}
		if(phy<35)
		{
			printf("FAILED IN PHYSICS\n");
		}
		if(che<35)
		{
			printf("FAILED IN CHEMISTRY\n");
		}
		if(cs<35)
		{
			printf("FAILED IN COMPUTER SCIENCE");
		}
	}
}
