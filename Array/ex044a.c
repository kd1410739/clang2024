#include <stdio.h>
main()
{
	char moji1[80], moji2[80],ch[80];
	int i;
	printf("文字列1を入力:");
	scanf("%s", &moji1[0]);
	printf("文字列2を入力:");
	scanf("%s", &moji2[0]);
	printf("moji1=%s\tmoji2=%s\n", &moji1[0], &moji2[0]);
	printf("入れ替えると\n");
	printf("moji1=%s\tmoji2=%s\n", &moji2[0], &moji1[0]);
}