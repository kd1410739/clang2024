#include <stdio.h>
main()
{
	int num, sum, i;
	sum = 0, i = 0;
	printf("����:");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		i++;
		printf("����:");
	}
	printf("���v=%d ����=%.2f\n", sum, (float)sum / i);
}