#include <stdio.h>

int main(void)
{
	int a,b,c,d,max;
	printf("４つの整数値を入力してください。\n整数１：");
	scanf("%d",&a);
	max=a;				//maxに整数１の値を格納
	
	printf("整数２：");
	scanf("%d",&b);
	if(b>max)			//整数１よりも大きい場合
		max=b;			//maxに整数２の値を格納
	
	printf("整数３：");
	scanf("%d",&c);
	if(c>max)			//整数１，２よりも大きい場合
		max=c;			//maxに整数３の値を格納
	
	printf("整数４：");
	scanf("%d",&d);
	if(d>max)			//整数１〜３よりも大きい場合
		max=d;			//maxに整数４の値を格納
	
	printf("最大値は%dです。\n",max);
	return 0;
}