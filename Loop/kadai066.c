#include <stdio.h>
main()
{
	int i, sum;
	i = 1, sum = 0;
	do
	{
		printf("%d+", i);
		sum += i;
		i++;
	} while (sum<301);
	printf("\b=%d", sum);
}