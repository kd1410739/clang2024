#include <stdio.h>
main()
{
	char moji[15] = "mikan";
	char ore[15], * pmoji, * pore;
	pmoji = &moji, pore = &ore;
	while (*pore++ = *pmoji++);
	printf("コピー先の文字列=%s\n", ore);
}