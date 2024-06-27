#include <stdio.h>
main()
{
	int num, i, j;
	i = 1;
	printf("”‚ÍH");
	scanf("%d", &num);
	do
	{
		j = 0;
		do
		{
			printf("*");
			j++;
		} while (j < i );
		printf("\n");
		i++;
	} while (i <=num);
}