#include <stdio.h>
main()
{
	int num,sum,i;
	sum = 0;
	i = 0;
	do
	{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		sum += num;
		i++;
	} while (1);
	printf("‡Œv=%d\n•½‹Ï=%f\n", sum, (float)sum / i);
}