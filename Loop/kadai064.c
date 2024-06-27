#include <stdio.h>
main()
{
	int i;
	i = 20;
	while (i > 0)
	{
		printf("%3d", i);
		if (i % 10 == 1)
		{
			printf("\n");
		}
		i--;
	}
}