#include <stdio.h>
main()
{
	char data[] = "Language";
	char s, * pdata;
	pdata = &data;
	int i;
	printf("data[]=%s\n", pdata);
	printf("����������?");
	scanf("%c", &s);
	printf("�������ʂ́A");
	for (i=1;*pdata != '\0'; pdata++,i++)
	{
		if (*pdata == s)
		{
			printf("%d ", i);
		}
	}
	printf("�����ڂł�\n");
}