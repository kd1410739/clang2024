#include <stdio.h>
main()
{
	char m[100];
	int i;
	printf("�������?");
	scanf("%s", &m[0]);
	for (i = 0; m[i] != '\0'; i++)
	{
		putchar(m[i]);
		putchar('\n');
	}
}