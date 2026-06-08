//week16-3a.cpp SOIT_ADVANCE_001
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i*i==n){
			printf("%d",i);
		}
		else
			m++;
		}
		if(m==n){
			printf("0");
		}


}
