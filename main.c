#include <stdio.h>

int main(void)
{
	float a, b;
	printf("�g������͂��Ă������� :");
	scanf("%f", &a);
	b = (a - 100)*0.9;
	printf("�W���̏d��%.1f�ł�", b);
	return 0;
}