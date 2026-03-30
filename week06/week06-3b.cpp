//week06-3b.cpp soit107_base_002
#include <stdio.h>
int main()
{
	int m,a,b,c,d;
	scanf("%d",&m);
	a=m/50;
	b=(m%50)/10;
	c=((m%50))%10/5;
	d=(m%50)%10%5;
	printf("%d=50*%d+10*%d+5*%d+1*%d",m,a,b,c,d);
}
