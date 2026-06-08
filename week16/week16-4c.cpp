//week16-4c.cpp soit106_Advance_005_C
#include <stdio.h>
#include <iostream>

int MYPOWER(int a,int b);
int main(void)

{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
int MYPOWER(int a,int b)
{
	int a1=1;
	for(int i=1;i<=b;i++){

		a1=a1*a;
	}
	return a1;

}
