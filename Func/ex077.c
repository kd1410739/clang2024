#include <stdio.h>
void work(int x, int y,int z, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	work(a, b, c, &max, &min);
	printf("最大値=%d 最小値=%d\n", max, min);
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