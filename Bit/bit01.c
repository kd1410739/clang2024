#include <stdio.h>

enum BitState
{
	Base = 0,
	Poison = 1 << 0,
	Sleep = 1 << 1,
	Paralysis = 1 << 2,
	Burn = 1 << 3,
	AtkUp = 1 << 4,
	AtkDown = 1 << 5
};

typedef unsigned int UNIT;

void DisplayStatus(UNIT s);
void ChangeFlag(UNIT* s);
void ClearFlag(UNIT* s);

main()
{
	UNIT MyState = Base;
	ChangeFlag(&MyState);
	//DisplayStatus(MyState);
	ClearFlag(&MyState);
	//DisplayStatus(MyState);
}

void DisplayStatus(UNIT s)
{
	printf("****Œ»Ý‚Ìó‘Ô****\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("‡–°\n");
	}
	if (s & Paralysis)
	{
		printf("–ƒáƒ\n");
	}
	if (s & Burn)
	{
		printf("‰Î\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚ã¸\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚’á‰º\n");
	}
	if (s == Base)
	{
		printf("ó‘ÔˆÙí‚È‚µ\n");
	}
	printf("**********\n");

}

void ChangeFlag(UNIT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s)
		printf("‚Ç‚Ìó‘Ô‚ð•t—^‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ã¸ 6:UŒ‚’á‰º 0:I—¹>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UNIT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s)
		printf("‚Ç‚Ìó‘Ô‚ð‰ðœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ã¸ 6:UŒ‚’á‰º 7:‘S‰ðœ 0:I—¹> ");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}

