#include <stdio.h>
main()
{
	int n1;
	printf("数を入れて:");
	scanf("%d", &n1);
	while (n1>0)
	{
		printf("*");
		n1-=1;
	}
}