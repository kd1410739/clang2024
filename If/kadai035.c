#include <stdio.h>
main()
{
	int n;
	printf("整数?");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("入力値はプラスです\n");
	}
	else
	{
		if (n == 0)
		{
			printf("入力値は0です\n");
		}
		else
		{
			printf("入力値はマイナスです\n");
		}
	}
}