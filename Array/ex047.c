#include <stdio.h>
main()
{
	float x[3][2],gokei;
	int i, j;
	for (j = 0; j < 3; j++)
	{
		for (i = 0, gokei = 0; i < 2; i++)
		{
			printf("x[%d][%d]=", j, i);
			scanf("%f", &x[j][i]);
				gokei += x[j][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", j, gokei / 2);
	}
}