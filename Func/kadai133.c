#include <stdio.h>
main()
{
	int num, max, min;
	printf("����(z�ŏI��)");
	scanf("%d", &num);
	max = num, min = num;
	printf("����(z�ŏI��)");
	while(scanf("%d",&num)!=EOF)
	{
		if (max < num)
		{
			max = num;
		}
		if (min > num)
		{
			min = num;
		}
		printf("����(z�ŏI��)");
	}
	printf("max=%d\nmin=%d\n", max, min);
}