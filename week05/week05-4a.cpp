//week05-4a.cpp SOIT106_BASE_012
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=100;
	if(n>2000){
		a+=(n-2000)/500*5;
		if((n-2000)%500*5>0)a+=5;
	}
	printf("%d\n",a);
}
