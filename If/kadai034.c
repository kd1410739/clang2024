#include <stdio.h>
main()
{
	char mo;
	printf("1•¶š“ü—Í?");
	scanf("%c", &mo);
	if (mo <= 'A' && mo >= 'Z')
	{
		printf("‚»‚Ì•¶š‚Í‘å•¶š‚Å‚·\n");
	}
	else
	{
		if (mo <= 'a' && mo >= 'z')
		{
			printf("‚»‚Ì•¶š‚Í¬•¶š‚Å‚·\n");
		}
		else
		{
			printf("ƒGƒ‰[\n");
		}
	}
}