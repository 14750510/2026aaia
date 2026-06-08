//week16-3a.cpp SOIT108_Advance_001
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=1;i<=1000;i++){
		if(i*i==n)a=i;
	}
	printf("%d",a);
}
