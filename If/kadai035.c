#include <stdio.h>
main()
{
	int n;
	printf("����?");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("���͒l�̓v���X�ł�\n");
	}
	else
	{
		if (n == 0)
		{
			printf("���͒l��0�ł�\n");
		}
		else
		{
			printf("���͒l�̓}�C�i�X�ł�\n");
		}
	}
}