#include <stdio.h>

int main(void)
{
	int a,b,c,d,max;
	printf("�S�̐����l����͂��Ă��������B\n�����P�F");
	scanf("%d",&a);
	max=a;				//max�ɐ����P�̒l���i�[
	
	printf("�����Q�F");
	scanf("%d",&b);
	if(b>max)			//�����P�����傫���ꍇ
		max=b;			//max�ɐ����Q�̒l���i�[
	
	printf("�����R�F");
	scanf("%d",&c);
	if(c>max)			//�����P�C�Q�����傫���ꍇ
		max=c;			//max�ɐ����R�̒l���i�[
	
	printf("�����S�F");
	scanf("%d",&d);
	if(d>max)			//�����P�`�R�����傫���ꍇ
		max=d;			//max�ɐ����S�̒l���i�[
	
	printf("�ő�l��%d�ł��B\n",max);
	return 0;
}