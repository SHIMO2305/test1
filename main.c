#include <stdio.h>

int main(void)
{
	float a, b;
	printf("身長を入力してください :");
	scanf("%f", &a);		//身長aの入力
	b = (a - 100)*0.9;
	printf("標準体重は%.1fです", b);
	return 0;
}
