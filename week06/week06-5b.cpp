//week06-5b.cpp soit107_base_008
#include <stdio.h>
int main()
{
	int a,b,i,sum=1;
	scanf("%d",&a);
	printf("Enter the number of values to be processed: ");
	for(i=1;i<=a;i++){
		scanf("%d",&b);
		printf("Enter a value: ");
		sum=sum*b;
	}
	printf("Product of the %d values is %d",a,sum);
}
