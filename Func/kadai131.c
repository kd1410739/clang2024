#include <stdio.h>
main()
{
	char c;
	printf("•¶šctrl+z‚ÅI—¹?");
	while (scanf("%c", &c) != EOF)
	{
		scanf("%*c");
		putchar(c);
		putchar('\n');
		printf("•¶šctrl+z‚ÅI—¹?");
	}
}