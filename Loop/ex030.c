#include <stdio.h>
main()
{
	int num, i;
	i = 0;
	printf("��������:");
	scanf("%d", &num);
	while (i <= 10)
	{
		printf("%d+%d=%d\n", num, i, num + i);
		i++;
	}
}