#include <stdio.h>
main()
{
	int n;
	printf("整数？");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("その数は偶数です\n");
	}
	else
	{
		printf("その数は奇数です\n");
	}
}