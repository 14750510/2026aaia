//week16-3c.cpp SOIT108_Advance_004
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=1;i<=n;i++){
		a+=i*11;
	}
	printf("%d",a);
}
