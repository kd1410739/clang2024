#include <stdio.h>

main()
{
	char moji[100];
	char* pmoji;
	int i;
	printf("•¶š—ñ?");
	gets(moji);	
	pmoji = moji;
	for (i = 0; *pmoji != '\0'; i++, pmoji++);
	printf("•¶š”‚Í%d•¶š‚Å‚·\n", i);
}