//week05-4b.cpp SOIT106_BASE_012
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=100;
	if(n>1500){
		a+=(n-1500)/250*5;
		if((n-1500)%250*5>0)a+=5;
	}
	printf("%d",a);
}
