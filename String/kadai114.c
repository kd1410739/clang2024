#include <stdio.h>
main()
{
	char m[100];
	int i;
	printf("�������?");
	scanf("%s", &m[0]);
	for (i = 1; m[i] != '\0'; i++);
	printf("������:%s\t������=%d����\n", &m[0],i);

}