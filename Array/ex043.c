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
	printf("������:%s", &data[0]);
	printf("\n��������%d����\n", i);
}