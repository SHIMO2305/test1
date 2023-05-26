#include <stdio.h>

int main(void)
{
	int a,b,c,d,max;
	printf("‚S‚Â‚Ì®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n®”‚PF");
	scanf("%d",&a);
	max=a;				//max‚É®”‚P‚Ì’l‚ğŠi”[
	
	printf("®”‚QF");
	scanf("%d",&b);
	if(b>max)			//®”‚P‚æ‚è‚à‘å‚«‚¢ê‡
		max=b;			//max‚É®”‚Q‚Ì’l‚ğŠi”[
	
	printf("®”‚RF");
	scanf("%d",&c);
	if(c>max)			//®”‚PC‚Q‚æ‚è‚à‘å‚«‚¢ê‡
		max=c;			//max‚É®”‚R‚Ì’l‚ğŠi”[
	
	printf("®”‚SF");
	scanf("%d",&d);
	if(d>max)			//®”‚P`‚R‚æ‚è‚à‘å‚«‚¢ê‡
		max=d;			//max‚É®”‚S‚Ì’l‚ğŠi”[
	
	printf("Å‘å’l‚Í%d‚Å‚·B\n",max);
	return 0;
}