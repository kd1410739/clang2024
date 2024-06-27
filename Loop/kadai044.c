#include <stdio.h>
main()
{
	int num;
	printf("整数(-999で入力終了)?");
	scanf("%d", &num);
	while (num != -999)
	{
		printf("8進数=%o\t16進数=%X\n", num, num);
		printf("整数(-999で入力終了)?");
		scanf("%d", &num);

	}
}