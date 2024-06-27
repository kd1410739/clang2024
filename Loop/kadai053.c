#include <stdio.h>
main()
{
	int num, i;
	printf("®”?");
	scanf("%d", &num);
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", num + i);
	}
}