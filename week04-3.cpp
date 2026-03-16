//week04-3.cpp SOIT106_BASE
#include <stdio.h>
int main()
{
	int a=0;
	for(int i=0;i<10;i++){
		int n;
		scanf("%d",&n);
		if(n%3==0)a++;
	}
	printf("%d\n",a);
}
