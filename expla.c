#include <stdio.h>
main()
{
	int h, m, s;
	printf("�b�������:");
	scanf("%d", &s);
	h = s / 3600;
	m = (s % 3600) / 60;
	s = s % 60;
	if (s > 5000) {
		printf("�G���[");
	}
	else {
		printf("%d����%d��%d�b�ł�\n", h, m, s);
	}

}