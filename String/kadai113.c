#include <stdio.h>
main()
{
	char m[] = "GameSoft";
	int i;
	for (i = 1; m[i] != '\0'; i++);
	printf("•¶š—ñ=%s\n", &m[0]);
	printf("•¶š”=%d•¶š\n", i);
}