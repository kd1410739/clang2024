#include <stdio.h>
main()
{
	int num,sum,i;
	i = 0,sum = 0;
	printf("®”(Z‚ÅI—¹)?");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		i++;
		printf("®”(Z‚ÅI—¹)?");
	}
	printf("‡Œv=%d\n", sum);
	printf("•½‹Ï=%.1f\n", (float)sum / i);
}