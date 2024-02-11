#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	a += b;
	b -= c;
	c *= a;
	a /= b;
	b %= c;
	
	printf("%d\n%d\n%d",a,b,c);
}
