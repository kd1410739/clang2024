#include <stdio.h>
main()
{
	int num,sum,i;
	i = 0,sum = 0;
	printf("����(Z�ŏI��)?");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		i++;
		printf("����(Z�ŏI��)?");
	}
	printf("���v=%d\n", sum);
	printf("����=%.1f\n", (float)sum / i);
}