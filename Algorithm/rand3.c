#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int k;
	srand(time(0));
	rand();
	k = rand() % 100 + 1;
	if (k < 31)
	{
		printf("かいしんのいちげき!\n");
	}
	else
	{
		printf("通常攻撃\n");
	}
}
