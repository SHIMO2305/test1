#include <stdio.h>

int main(void)
{
	float a, b;
	printf("身長を入力してくださいね :"); // 身長の入力です！
	scanf("%f", &a);
	b = (a - 100)*0.9; //標準体重の計算
	printf("標準体重は%.1fです", b); //標準体重の表示です！
	return 0;
}
