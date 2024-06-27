#include <stdio.h>
#define cnt 9
int saidai(int* a);
int saisyou(int* a);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int max, min,i;
	printf("”z—ñ‚Ì“à—e\n");
	for (i = 0; i < cnt; i++)
	{
		printf("%d ", a[i]);
	}
	max = saidai(a);
	min = saisyou(a);
	printf("\nmax=%d\tmin=%d\n", max,min);

}

int saidai(int* a)
{
	int max, i;
	max = *a;
	for (i = 0; i < cnt; i++,a++)
	{
		if (max < *a)
		{
			max = *a;
		}
	}
	return(max);
}

int saisyou(int* a)
{
	int min, i;
	min = *a;
	for (i = 0; i < cnt; i++, a++)
	{
		if (min > *a)
		{
			min = *a;
		}
	}
	return(min);
}