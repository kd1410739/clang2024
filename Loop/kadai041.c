#include <stdio.h>
main()
{
	int num,sum, i;
	sum = 0, i = 0,num=0;
	while (num != -999)
	{
		sum += num;
		i++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
	}
	printf("���v=%d\n",sum);
	printf("����=%.2f", (float)sum / (i-1));
}