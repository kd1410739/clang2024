#include <stdio.h>
main()
{
	int	i, data[5];
	for (i = 0; i < 5; i++)
	{
		printf("�z��data[%d]=", i);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("data[%d]=%d\n", i, data[i]);
	}
}