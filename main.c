#include <stdio.h>

int main(void)
{
	float a, b;
	printf("身長を入力してくださいね :");
	scanf("%f", &a);
	b = (a - 100)*0.9;
	printf("標準体重は%.1fです", b);
	return 0;
}
