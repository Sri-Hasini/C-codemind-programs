#include <stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    while(p--)
    {
	int x,y,z,s,h;
	scanf("%d%d%d",&x,&y,&z);
	if(x<y&&x<z)
	{
		 s=x;
	}
	else if(y<x&&y<z)
	{
		s=y;
	}
	else
	{
		s=z;
	}
	
	if(x>y&&x>z)
	{
		 h=x;
	}
	else if(y>x&&y>z)
	{
		h=y;
	}
	else
	{
		h=z;
	}
	printf("%d\n",h-s);
    }
}
