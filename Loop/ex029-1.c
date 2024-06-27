#include <stdio.h>
main()
{
	int n1;
	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &n1);
	while (n1>0)
	{
		printf("*");
		n1-=1;
	}
}