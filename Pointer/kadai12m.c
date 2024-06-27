#include <stdio.h>
main()
{
	char str1[128], str2[128];
	char* pstr1, * pstr2;
	int i;
	pstr1 = str1, pstr2 = str2;
	printf("•¶Žš—ñ1?");
	scanf("%s", &str1[0]);
	printf("•¶Žš—ñ2?");
	scanf("%s", &str2[0]);
	printf("str1:");
	while (*pstr1)
	{
		printf("%c", *pstr1++);
		if (*pstr1 == '\0')
		{
			while (*pstr2)
			{
				printf("%c", *pstr2++);
			}
		}
	}
}