#include <stdio.h>
main()
{
	int num,i,c[10],j;
	for (i = 0; i < 10; i++)
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		c[i] = num;
	}
		printf("�z��c=");
		for (j = 0; j < i; j++)
		{
			printf("%d ", c[j]);
		}
}