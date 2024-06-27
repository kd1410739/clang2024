#include <stdio.h>
main()
{
	int num,i,j;
	printf("”‚ÍH");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j <num -(i+1); j++)
		{
			printf(" ");
		}
		for (j = 0; j <=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}