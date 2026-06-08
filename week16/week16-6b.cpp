//week16-6b.cpp SOIT108_Advance_011
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int h=n/60/60;
	int m=n/60%60;
	int s=n%60;
	printf("%02d:%02d:%02d",h,m,s);
}
