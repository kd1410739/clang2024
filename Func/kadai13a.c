#include <stdio.h>
long bekizyou(int a, int b);
main()
{
	int a, b;
	long kotae;
	printf("”’l1:");
	scanf("%d", &a);
	printf("”’l2:");
	scanf("%d", &b);
	kotae = bekizyou(a, b);
	printf("%d‚Ì%dæ‚Í%ld", a, b, kotae);
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
