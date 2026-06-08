//week16-1a.cpp SOIT106_ADVANCE_002
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=m;i>0;i--)
		if(n%i==0  && m%i==0){
			printf("%d %d\n",n/i,m/i);
			break;
			}



}
