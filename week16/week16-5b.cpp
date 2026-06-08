//week16-5b.cpp SOIT108_Advance_009
#include <stdio.h>
int a[100];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d", & a[i]);
	}

	for(int i=N-1; i>=0 ;i--){

		if( a[i]%2 !=0)
		printf("%d ", a[i]);
	}
 }
