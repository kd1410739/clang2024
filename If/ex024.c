#include <stdio.h>
main()
{
	char moji1;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji1);
	if (moji1 >= 'A' && moji1 <= 'Z')
	{
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else
	{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}