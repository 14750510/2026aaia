//week16-4b.cpp SOIT108_Advance_014
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=0;i<=n;i++){
		a+=2*i+1;
		}
	printf("f(%d)=%d",n,a);
}
