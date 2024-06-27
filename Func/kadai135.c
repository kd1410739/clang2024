#include <stdio.h>
main()
{
	char moji[256];
	char work[256];
	int i, j;
	printf("•¶š—ñctrl+z‚ÅI—¹:");
	while (scanf("%s", &moji) != EOF)
	{
		for (i = 0; moji[i] != '\0'; i++);
		i--;
		for (j = 0; i >= 0; i--, j++)
		{
			work[j] = moji[i];
		}
		work[j] = '\0';
		printf("%s\n", work);
		printf("•¶š—ñctrl+z‚ÅI—¹:");
	}

}