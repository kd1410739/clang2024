#include <stdio.h>
main()
{
	char data1[] = "abcde";
	char data2[100];
	int i;
	for (i = 0; data1[i] != '\0'; i++)
	{
		data2[i] = data1[i];
	}
	printf("（コピー元）配列data1[]=%s\n", &data1[0]);
	printf("（コピー先）配列data2[]=%s\n", &data2[0]);
}