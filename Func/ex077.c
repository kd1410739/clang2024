#include <stdio.h>
void work(int x, int y,int z, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	work(a, b, c, &max, &min);
	printf("Å‘å’l=%d Å¬’l=%d\n", max, min);
}

void work(int x, int y, int z, int* max, int* min)
{
	*max = x, * min = x;
	if (*max < y)
	{
		*max = y;
	}
	if (*max < z)
	{
		*max = z;
	}
	if (*min > y)
	{
		*min = y;
	}
	if (*min > z)
	{
		*min = z;
	}
	return;
}