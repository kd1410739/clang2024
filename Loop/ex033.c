#include <stdio.h>
main()
{
	int i,num, sum;
	printf("���́H");
	scanf("%d", &num);
	for (sum = 0,i = 0; num != -999;i++)
	{
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}
	printf("���v=%d ����=%.2f", sum, (float)sum / i);
}