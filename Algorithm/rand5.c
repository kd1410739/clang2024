#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num,i;
	srand(time(0));
	rand();
	for (i = 1; i < 101; i++)
	{
		num = rand() % 300 + 1;
		printf("%4d ", num);
		if (i%10==0)
		{
			printf("\n");
		}
	}
}