#include <stdio.h>
main()
{
	int sum, i;
	sum = 0, i = 1;
	while (sum <= 300)
	{
		printf("%d+", i);
		sum += i;
		i++;
	}
	printf("\b=%d", sum);
}