#include <stdio.h>
main()
{
	int i;
	char data[] = "orange";
	i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	printf("文字列:%s", &data[0]);
	printf("\n文字数は%d文字\n", i);
}