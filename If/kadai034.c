#include <stdio.h>
main()
{
	char mo;
	printf("1文字入力?");
	scanf("%c", &mo);
	if (mo <= 'A' && mo >= 'Z')
	{
		printf("その文字は大文字です\n");
	}
	else
	{
		if (mo <= 'a' && mo >= 'z')
		{
			printf("その文字は小文字です\n");
		}
		else
		{
			printf("エラー\n");
		}
	}
}