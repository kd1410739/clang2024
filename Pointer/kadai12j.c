#include <stdio.h>
main()
{
	char mo[20] = "ringo";
	char str[20], * pmo, * pstr;
	int i;
	pmo = &mo;
	printf("”z—ñ“à—e=");
	for (i = 0; *pmo != '\0'; i++, pmo++)
	{
		putchar(*pmo);
	}
	printf("\n");
	pmo = mo, pstr = str;
	for (i = 0; i < 5; i++)
	{
		*(pstr + 4 - i) = *(pmo + i);
	}
	*(pstr + 5) = '\0';
	pstr = str;
	printf("‹t‡Œ‹‰Ê=");
	for (i = 0; *pstr != '\0'; i++, pstr++)
	{
		putchar(*pstr);
	}
	printf("\n");
}