#include <stdio.h>
main()
{
	char mo;
	printf("アルファベット?");
	scanf("%c", &mo);
	if (mo >= 'A' && mo <= 'Z')
	{
		printf("その文字は大文字です\n");
	}
	else
	{
		printf("その文字は小文字です\n");
	}
}