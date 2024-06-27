#include <stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	int i = 0;
	while (*p)
	{
		save[i] = *p;
		printf("%c", save[i]);
		i++;
		p++;
	}

}