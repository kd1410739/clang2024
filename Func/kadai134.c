#include <stdio.h>
main()
{
	char moji;
	printf("������z�ŏI��:");
	while (scanf("%s", &moji) != EOF)
	{
		puts(&moji);		
		printf("������z�ŏI��:");
	}
}