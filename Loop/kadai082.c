#include <stdio.h>
main()
{
	int num,sum,i;
	sum = 0, i = 0;
	while (1)
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		if (num < 0)
		{
			continue;
		}
		sum += num;
		i++;
	}
	printf("���v=%d\n",sum);
	printf("����=%.3f\n", (float)sum / i);
}