#include <stdio.h>
void sort(int* a, int size, int order);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int num,i;
	printf("ソート方法(0:昇順 1:降順)?");
	scanf("%d", &num);
	printf("ソート前\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}

	if (num == 0)
	{
		sort(a, 9, 0);
	}
	if (num == 1)
	{
		sort(a, 9, 1);
	}
	printf("\nソート後\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void sort(int* a, int size, int order)
{
	int i, j, w;
	switch (order)
	{
	case 0:for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (*(a + i) > *(a + j))
			{
				w = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = w;
			}
		}
	}
		  break;
	case 1:for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (*(a + i) < *(a + j))
			{
				w = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = w;
			}
		}
	}
		  break;
	}
	return;

}