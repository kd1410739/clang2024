#include <stdio.h>
main()
{
	char mo[100] = "mikan to ringo";
	char* pmo;
	int i;
	pmo = mo;
	printf("空白を除いた配列内容=");
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