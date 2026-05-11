//week12-2c.cpp SOIT106 ADVANCE 001
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int n2=n;
	while(n>0){
		a=a*10+n%10;
		n=n/10;
	}
	printf("%d+%d=%d\n",n2,a,n2+a);

}
