#include <stdio.h>
main()
{
	char moji1;
	printf("文字を入力:");
	scanf("%c", &moji1);
	if (moji1 >= 'A' && moji1 <= 'Z')
	{
		printf("大文字です\n");
	}
	else
	{
		printf("その他の文字です\n");
	}
}