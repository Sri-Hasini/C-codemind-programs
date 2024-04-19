#include <stdio.h>
int main()
{
	char str[1000];
	int i;
	scanf("%[^\n]s",str);
	int di = 0;
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			di+=(str[i]-48);
		}
	}
	printf("%d ",di);
}
