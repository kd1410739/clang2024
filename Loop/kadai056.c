#include <stdio.h>
main()
{
	char moji, i;
	printf("アルファベット小文字?");
	scanf("%c", &moji);
	for (i = moji; i <= 121; i++)
	{
		printf("%c ", i+1);
	}
}