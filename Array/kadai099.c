#include <stdio.h>
main()
{
	int num,i;
	char moji[100];
	printf("回数と文字列を入力 ");
	scanf("%d %s", &num, &moji[0]);
	for (i = 0; i < num; i++)
	{
		printf("%s ",&moji[0]);
	}

}