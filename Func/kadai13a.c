#include <stdio.h>
long bekizyou(int a, int b);
main()
{
	int a, b;
	long kotae;
	printf("数値1:");
	scanf("%d", &a);
	printf("数値2:");
	scanf("%d", &b);
	kotae = bekizyou(a, b);
	printf("%dの%d乗は%ld", a, b, kotae);
}

long bekizyou(int a, int b)
{
	int i, kotae;
	kotae = 1;
	for (i = 1; i <= b; i++)
	{
		kotae *= a;
	}
	return(kotae);
}
