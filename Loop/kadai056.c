#include <stdio.h>
main()
{
	char moji, i;
	printf("�A���t�@�x�b�g������?");
	scanf("%c", &moji);
	for (i = moji; i <= 121; i++)
	{
		printf("%c ", i+1);
	}
}