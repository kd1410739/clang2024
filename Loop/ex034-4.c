#include <stdio.h>
main()
{
	int num, i, j;
	i = 0;
	printf("���́H");
	scanf("%d", &num);
	do
	{
		j = 0;
		do
		{
			printf(" ");
			j++;
		} while (j<num-i);
		j = 0;
		do
		{
			printf("*");
			j++;
		} while (j < i+1 );
		printf("\n");
		i++;
	} while (i <num);
}