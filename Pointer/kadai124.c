#include <stdio.h>
main()
{
	char c, * c_p;
	printf("1��������?");
	scanf("%c", &c);
	c_p = &c;
	printf("���̕�����%c\n", *c_p + 1);
}