#include <stdio.h>
main()
{
	char* p = "Nippon";
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("%c", *p++);
	}
}