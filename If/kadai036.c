#include <stdio.h>
main()
{
	int n1, n2;
	printf("®”1H");
	scanf("%d",&n1);
	printf("®”2H");
	scanf("%d",&n2);

	if (n1 == n2)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n", n1, n2);
	}
	else
	{
		if (n1 > n2)
		{
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢\n", n1, n2, n1 - n2);
		}
		else
		{
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢\n", n1, n2, n2 - n1);
		}
	}
}