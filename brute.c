#include<stdio.h>
int main()
{
	int num[100],i;
	for(i=0;(i<100)&&(num[i]!=EOF);i++)
		scanf("%d",(num+i));
	for(i=0;num[i]!=42;i++)
		printf("%d \n",*(num+i));
	return 0;
}
