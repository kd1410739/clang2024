#include <stdio.h>
main()
{
	int num,sum,i;
	sum = 0, i = 0;
	while (1)
	{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		sum += num;
		i++;
	}
	printf("‡Œv=%d\n",sum);
	printf("•½‹Ï=%.3f\n", (float)sum / i);
}