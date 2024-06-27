#include <stdio.h>
#define cnt 8
int saidai(int*);
int saisyou(int*);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int max, min;
	max = saidai(data);
	min = saisyou(data);
	printf("Å‘å’l=%d\n", max);
	printf("Å¬’l=%d\n", min);
}

int saidai(int* data)
{
	int max,i;
	max = *data;
	*data++;
	for (i = 1; i < cnt; i++,data++)
	{
		if (max < *data)
		{
			max = *data;
		}
	}
	return(max);
}

int saisyou(int* data)
{
	int min, i;
	min = *data;
	*data++;
	for (i = 1; i < cnt; i++,data++)
	{
		if (min > *data)
		{
			min = *data;
		}
	}
	return(min);
}
