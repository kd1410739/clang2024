#include <stdio.h>
main()
{
	char m[] = "GameSoft";
	int i;
	for (i = 1; m[i] != '\0'; i++);
	printf("文字列=%s\n", &m[0]);
	printf("文字数=%d文字\n", i);
}