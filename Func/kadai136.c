#include <stdio.h>
int hikaku(int x, int y);
main()
{
	int a, b,max;
	printf("2‚Â‚Ì®”?");
	scanf("%d%d", &a, &b);
	max = hikaku(a, b);
	printf("max=%d", max);
}

int hikaku(int x, int y)
{
	int max;
	if (x > y)
	{
		max = x;
		return(max);
	}
	else
	{
		max = y;
		return(max);
	}
}