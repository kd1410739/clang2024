#include <stdio.h>
main()
{
	int n1, x;
	x = 0;
	printf("数を入れて:");
	scanf("%d", &n1);
	while (x < n1)
	{
		printf("*");
		x++;
	}
}