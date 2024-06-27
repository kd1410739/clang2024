#include <stdio.h>
main()
{
	int num1, num2;
	char ope;
	printf("®”1?");
	scanf("%d", &num1);
	printf("®”2?");
	scanf("%d",&num2);
	printf("‰‰Zq?");
	scanf("%*c%c", &ope);
	switch (ope)
	{
	case'+':printf("%d+%d=%d\n", num1, num2, num1 + num2);
		break;
	case'-':printf("%d-%d=%d\n", num1, num2, num1 - num2);
		break;
	case'*':printf("%d*%d=%d\n", num1, num2, num1 * num2);
		break;
	case'/':printf("%d/%d=%d\n", num1, num2, num1 / num2);
		break;
	default:printf("%d%%d=%d\n", num1, num2, num1 % num2);
	}

}