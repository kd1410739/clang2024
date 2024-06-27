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
	printf("•¶š—ñ:%s", &data[0]);
	printf("\n•¶š”‚Í%d•¶š\n", i);
}