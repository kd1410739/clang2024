#include <stdio.h>
main()
{
	int num, max, min;
	printf("®”(z‚ÅI—¹)");
	scanf("%d", &num);
	max = num, min = num;
	printf("®”(z‚ÅI—¹)");
	while(scanf("%d",&num)!=EOF)
	{
		if (max < num)
		{
			max = num;
		}
		if (min > num)
		{
			min = num;
		}
		printf("®”(z‚ÅI—¹)");
	}
	printf("max=%d\nmin=%d\n", max, min);
}