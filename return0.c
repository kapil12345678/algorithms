#include<stdio.h>
#define forever for(;;)
void some();
int main()
{
	some();
	return 0;
}
void some()
{
	for(;;)
	{
		int n;
		printf("enter your number \n");
		scanf("%d",&n);
		if(n>0)
		{
			printf("the program is exiting now \n");
			return 0;
		}
		else
		{
			printf("enter other number \n");
		}
	}
}

