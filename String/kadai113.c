#include <stdio.h>
main()
{
	char m[] = "GameSoft";
	int i;
	for (i = 1; m[i] != '\0'; i++);
	printf("������=%s\n", &m[0]);
	printf("������=%d����\n", i);
}