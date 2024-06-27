#include <stdio.h>
void reverse(char*, char*);
main()
{
	char str1[256],str2[256];
	printf("•¶š—ñ?:");
	scanf("%s", &str1);
	reverse(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}

void reverse(char *str1, char *str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	i--;
	for (j = 0; i >= 0; i--, j++)
	{
		*(str2 + j) = *(str1 + i);
	}
	*(str2 + j) = '\0';
	return;
}
