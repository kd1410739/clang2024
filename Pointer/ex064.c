#include <stdio.h>
main()
{
	char* pride[3] = { "car","bus","shinkansen" };
	int i;
	i = 0;
	for (i = 0; i < 3; i++)
	{
		while (*pride[i])
		{
			printf("%c", *pride[i]);
			pride[i]++;
		}
		printf("\n");
	}
}