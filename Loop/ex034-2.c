#include <stdio.h>
main()
{
	int num,i;
	printf("���́H");
	scanf("%d", &num);
	do
	{
		i = 0;
		do
		{
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		num -= 1;
	} while (num > 0);
}