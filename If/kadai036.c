#include <stdio.h>
main()
{
	int n1, n2;
	printf("整数1？");
	scanf("%d",&n1);
	printf("整数2？");
	scanf("%d",&n2);

	if (n1 == n2)
	{
		printf("%dと%dは等しい\n", n1, n2);
	}
	else
	{
		if (n1 > n2)
		{
			printf("%dのほうが%dより%d大きい\n", n1, n2, n1 - n2);
		}
		else
		{
			printf("%dのほうが%dより%d小さい\n", n1, n2, n2 - n1);
		}
	}
}