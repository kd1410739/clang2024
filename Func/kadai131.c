#include <stdio.h>
main()
{
	char c;
	printf("文字ctrl+zで終了?");
	while (scanf("%c", &c) != EOF)
	{
		scanf("%*c");
		putchar(c);
		putchar('\n');
		printf("文字ctrl+zで終了?");
	}
}