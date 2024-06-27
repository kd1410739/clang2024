#include <stdio.h>
main()
{
	char data[] = "Language";
	char s, * pdata;
	pdata = &data;
	int i;
	printf("data[]=%s\n", pdata);
	printf("ŒŸõ•¶š‚Í?");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (i=1;*pdata != '\0'; pdata++,i++)
	{
		if (*pdata == s)
		{
			printf("%d ", i);
		}
	}
	printf("•¶š–Ú‚Å‚·\n");
}