#include <stdio.h>

int main(void)
{
	int a;
	printf("�_������͂��Ă��������F");
	scanf("%d", &a);
	if(a>=80)
	printf("�]���͗D�ł��B\n");
	
	else if(a>=70)
	printf("�]���͗ǂł��B\n");
	
	else if(a>=60)
	printf("�]���͉ł��B\n");
	
	else
	printf("�]���͕s�ł��B\n");
	return 0;
}