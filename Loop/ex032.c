#include <stdio.h>
main()
{
	int num, i;
	i = 1;
	printf("��������:");
	scanf("%d", &num);
	for (i = 1; i <= 5; i += 1) 
	{
		printf("%d ",num*i);
	}
}