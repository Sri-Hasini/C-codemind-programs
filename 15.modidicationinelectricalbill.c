//Electricity bill
#include <stdio.h>
int main()
{
	float u,s,bill;
	scanf("%f",&u);
	if(u<200)
	{
		bill = u*1.2;
	}
	else if(200<=u&&u<400)
	{
		bill = u*1.4;
	}
	else if(400<=u&&u<600)
	{
		bill = u*1.6;
	}
	else if(600<=u&&u<800)
	{
	    bill = u*1.8;
	}
	else if(u>=800)
	{
	    bill = u*2.0;
	}
	else
	{
		printf("INVALID INPUT");
	}
	float sur;
	
	if(bill>400)
	{
		sur = bill*0.15;
	}
	else
	{
		sur = 0;
	}
	float total_bill = bill + sur;
	printf("Units: %.2f\n", u);
	printf("Bill : %.2f\n",bill);
	printf("Surcharge :%.2f\n",sur);
	printf("Total bill :%.2f",total_bill);
}
