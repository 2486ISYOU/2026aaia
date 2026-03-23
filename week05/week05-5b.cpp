//week05-5b.cpp SOIT106_BASE_003
#include <stdio.h>
int main()
{
	int a[100]={};
	int i,n,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	m+=a[i];
	printf("%d\n",m);
