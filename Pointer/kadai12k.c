#include <stdio.h>
main()
{
	char mo[100] = "mikan to ringo";
	char* pmo;
	int i;
	pmo = mo;
	printf("‹ó”’‚ğœ‚¢‚½”z—ñ“à—e=");
	for(i=0;*pmo!='\0';i++,pmo++)
	{
		if (*pmo ==' ')
		{
			continue;
		}
		putchar(*pmo);
	}
	printf("\n");
}