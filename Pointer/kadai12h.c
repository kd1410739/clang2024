#include <stdio.h>

main()
{
	char* p = "Nippon";
	int i;
	while (*p)
	{
		*p++;
	}
	*p--;
	printf("逆順に表示すると、");
	for (i = 5; i >= 0; i--)
	{
		putchar(*p--);
	}
	putchar('\0');
}