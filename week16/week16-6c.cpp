//week16-6c.cpp soit108_advance_011
#include <stdio.h>
int main()
{
	int n,s,m,h;
	scanf("%d",&n);
	h=n/(60*60);
	m=(n-(h*60*60))/60;
	s=n-(h*60*60)-(m*60);
	printf("%02d:%02d:%02d",h,m,s);

}
