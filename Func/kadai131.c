#include <stdio.h>
main()
{
	char c;
	printf("����ctrl+z�ŏI��?");
	while (scanf("%c", &c) != EOF)
	{
		scanf("%*c");
		putchar(c);
		putchar('\n');
		printf("����ctrl+z�ŏI��?");
	}
}