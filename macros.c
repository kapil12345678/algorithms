#include<stdio.h>
#define max(a,b) a>b?a:b
int main()
{
	int a,b;
	printf("enter two numbers \n");
	scanf("%d%d",&a,&b);
	printf("the max of two numbers is %d ",max(a,b));
	return 0;
}
