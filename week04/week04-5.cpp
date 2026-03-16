//week04-5.cpp soit106_base_005
#include <stdio.h>
int main()
{
	int i,n,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(n%i==0)m=m+1;
	printf("%d\n",m);
}
