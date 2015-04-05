#include<stdio.h>
int main()
{
	register int i,j;
	int num,count=0;
	printf("enter your number \n");
	scanf("%d",&num);
	for(j=5;j<=num;j*=j)
	{
		for (i=5;i<=num;i +=j )
			count++;
	}
	printf("the number of zeros are %d ",count);
	return 0;
}

