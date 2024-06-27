#include <stdio.h>
main()
{
	char c, * c_p;
	printf("1•¶Žš“ü—Í?");
	scanf("%c", &c);
	c_p = &c;
	printf("ŽŸ‚Ì•¶Žš‚Í%c\n", *c_p + 1);
}