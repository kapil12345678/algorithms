#include<stdio.h>
int i=1;
int print();
int main()
{
	print();
	return 0;
}
int print()
{
	int c;
	if(i<=100)
	{
		printf("%d",i);
		return(return i++);
	}
	else
		return 0;
}


