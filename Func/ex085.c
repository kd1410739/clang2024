#include <stdio.h>
void str(char* a, char* b);
main()
{
	char a[256], b[256];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	str(a, b);
	printf("�z��a:%s\n", a);
}

void str(char* a, char* b)
{
	int i, j;
	for (i = 0; *(a + i) != '\0'; i++);
	for (j = 0; *(a + i) = *(b + j); i++, j++);
}