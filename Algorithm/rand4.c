#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un,i;
	i = 0;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^����");
	while (i < un)
	{
		printf("��");
		i++;
	}
	printf("�ł�\n");
}