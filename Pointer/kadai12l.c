#include <stdio.h>

main()
{
	char moji[100];
	char* pmoji;
	int i;
	printf("������?");
	gets(moji);	
	pmoji = moji;
	for (i = 0; *pmoji != '\0'; i++, pmoji++);
	printf("��������%d�����ł�\n", i);
}