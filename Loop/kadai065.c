#include <stdio.h>
main()
{
	int num,sum,i;
	sum = 0;
	i = 0;
	do
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		sum += num;
		i++;
	} while (1);
	printf("���v=%d\n����=%f\n", sum, (float)sum / i);
}