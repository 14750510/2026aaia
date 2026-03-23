//week05-5b.cpp SOIT106_BASE_003
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		a+=m;
	}
	printf("%d\n",a);
}
