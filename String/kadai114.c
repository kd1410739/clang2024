#include <stdio.h>
main()
{
	char m[100];
	int i;
	printf("文字列は?");
	scanf("%s", &m[0]);
	for (i = 1; m[i] != '\0'; i++);
	printf("文字列:%s\t文字数=%d文字\n", &m[0],i);

}