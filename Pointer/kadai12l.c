#include <stdio.h>

main()
{
	char moji[100];
	char* pmoji;
	int i;
	printf("文字列?");
	gets(moji);	
	pmoji = moji;
	for (i = 0; *pmoji != '\0'; i++, pmoji++);
	printf("文字数は%d文字です\n", i);
}