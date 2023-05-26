#include <stdio.h>

int main(void)
{
	int a;
	printf("点数を入力してください：");
	scanf("%d", &a);
	if(a>=80)
	printf("評価は優です。\n");
	
	else if(a>=70)
	printf("評価は良です。\n");
	
	else if(a>=60)
	printf("評価は可です。\n");
	
	else
	printf("評価は不可です。\n");
	return 0;
}