#include<stdio.h>
int main()
{
	int i;
	int a[100]={[0 ... 10]=1,[11 ... 90]=69,[91 ... 99]=40};
	for(i=0;i<100;i++)
		printf("%d element is %d \n",i+1,a[i]);
	return 0;
}
