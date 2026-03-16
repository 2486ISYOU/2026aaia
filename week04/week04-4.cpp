//week04-4.cpp soit106_base_008
#include <stdio.h>
int main()
{
	int a,b,i,max,min;
	scanf("%d %d",&a,&b);
	if(a>b)max=a;
	else max=b;
	if(a<b)min=a;
	else min=b;
	for(i=min;i<=max;i++)
	if(i%5==0)
	printf("%d\n",i);
}
