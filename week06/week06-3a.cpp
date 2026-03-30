//week06-3a.cpp soit106_base-002
#include <stdio.h>
int main()
{
	int m,x,y,z;
	scanf("%d",&m);
	x=m/50;
	y=(m%50)/5;
	z=(m%50)%5;
	printf("%d=50*%d+5*%d+1*%d\n",m,x,y,z);
}
