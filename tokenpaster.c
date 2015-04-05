#include<stdio.h>
#define tokenpaster(data,n) data##n
int main()
{
	int a0=0,a1=10,a2=20;
	printf("the value is %d,%d,%d \n",tokenpaster(a,0),tokenpaster(a,1),tokenpaster(a,2));
	return 0;
}

