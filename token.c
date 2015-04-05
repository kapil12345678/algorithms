#include<stdio.h>
#define tokenpaster(token,n) token##n
int main()
{
	int a;
	int n;
	int i;
	printf("how many variables do you want to create \n");
	scanf("%d",&n);
	for(i=i;i<=n;i++)
		tokenpaster(a,i);
	return 0;
}
