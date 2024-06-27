#include<stdio.h>
main()
{
	int s, high, low, mid;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("’Tõ’ls‚ğ“ü—Í:");
	scanf("%d", &s);
	low = 0, high = 10;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}
		if (s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("’Tõ’l%d‚ÍŒ©‚Â‚©‚ç‚È‚©‚Á‚½\n", s);
	}
	else
	{
		printf("’Tõ’l%d‚Íd[%d]”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", s, mid);
	}
}
