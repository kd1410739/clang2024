#include <stdio.h>
main()
{
	int num;
	num = 0;
	while (num != -1)
	{
		printf("%c\n", num);
		printf("文字コード(-1で入力終了)");
		scanf("%d", &num);
	}
}