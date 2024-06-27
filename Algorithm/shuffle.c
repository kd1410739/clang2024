#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define cnt 20
main()
{
	int data[20];
	int i, work, target;
	for (i = 0; i < cnt; i++)
	{
		data[i] = i + 1;
	}
	srand(time(0));
	rand();
	for (i = 0; i < cnt; i++)
	{
		target = rand() % cnt;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	for (i = 0; i < cnt; i++)
	{
		printf("data[%d]=%d\n", i, data[i]);
	}

}