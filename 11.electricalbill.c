//Electricity bill
#include <stdio.h>
int main()
{
	float u,x;
	scanf("%f",&u);
	if(u<200)
	{
	printf("%.2f",u*1.2);
	}
	else if(200<=u&&u<400)
	{
	printf("%.2f",u*1.4);
	}
	else if(400<=u&&u<600)
	{
	printf("%.2f",u*1.6);
	}
	else if(600<=u&&u<800)
	{
	printf("%.2f",u*1.8);
	}
	else if(u>=800)
	{
	printf("%.2f",u*2.0);
	}
	else
	{
		printf("INVALID INPUT");
	}
	
}
