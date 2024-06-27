#include <stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, k ,w;
	printf("ソート前\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", d[i]);
	}
	for (i = N - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
			for (k = N; k > 0; k--)
			{
				if (d[k] < d[k - 1])
				{
					w = d[k];
					d[k] = d[k - 1];
					d[k - 1] = w;
				}
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", d[i]);
	}
}