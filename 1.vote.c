//right to vote
#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Hey!You can vote!");

	}
	else
	{
		printf("Oops!You can't vote!");
	}
}
