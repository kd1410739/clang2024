#include <stdio.h>
main()
{
	int num,i,c[10],j;
	for (i = 0; i < 10; i++)
	{
		printf("Ž(-999ĹIš)?");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		c[i] = num;
	}
		printf("zńc=");
		for (j = 0; j < i; j++)
		{
			printf("%d ", c[j]);
		}
}