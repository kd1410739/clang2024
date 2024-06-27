#include <stdio.h>
int handan(char moji);
main()
{
	char moji;
	int cnt;
	printf("アルファベット1文字:");
	scanf("%c", &moji);
	cnt = handan(moji);
	if (cnt == 1)
	{
		printf("戻り値は%dなので入力した文字は大文字です\n", cnt);
	}
	else
	{
		printf("戻り値は%dなので入力した文字は小文字です\n", cnt);
	}
}

int handan(char moji)
{
	int suu;
	if (moji >= 'A' && moji <= 'Z')
	{
		suu = 1;
	}
	if (moji >= 'a' && moji <= 'z')
	{
		suu = 0;
	}
	return(suu);
}