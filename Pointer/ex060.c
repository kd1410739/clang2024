#include <stdio.h>
main()
{
	char data[] = "Language";
	char s, * pdata;
	pdata = &data;
	int i;
	printf("data[]=%s\n", pdata);
	printf("検索文字は?");
	scanf("%c", &s);
	printf("検索結果は、");
	for (i=1;*pdata != '\0'; pdata++,i++)
	{
		if (*pdata == s)
		{
			printf("%d ", i);
		}
	}
	printf("文字目です\n");
}