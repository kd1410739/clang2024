#include <stdio.h>
main()
{
	int h1, m1, s1;
	printf("�b�������:");
	scanf("%d", &s1);
	h1 = s1 / 3600;
	m1 = (s1 % 3600) / 60;
	s1 = s1 % 60;
	if (s1 > 5000) 
	{
		printf("�G���[���b�Z�[�W\n");
	}
	if (s1 < 0) 
	{
		printf("�}�C�i�X�̓G���[�ł�\n");

	}
	else
	{
		printf("%d���� %d�� %d�b", h1, m1, s1);
	}
}