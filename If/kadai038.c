#include <stdio.h>
main()
{
	char m;
	printf("1文字入力?");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z')
	{
		printf("変換結果は%c\n", m + 0x20);
	}
	else
	{
		if (m >= 'a' && m <= 'z')
		{
			printf("変換結果は%c\n", m - 0x20);
		}
		else
		{
			printf("%c\n", m);
		}
	}
}