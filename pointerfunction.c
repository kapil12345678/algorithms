#include<stdio.h>
int *p;
int *sqrt(int a[0]);
int main()
{
	int a[10],i,*b;
	printf("enter your integers \n");
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	b=sqrt(a[0]);
	printf("the modulus of this values are\n");
	for(i=0;i<10;i++)
	printf("%d\n",*(b+i));
	return 0;
}
int *sqrt(int x[0])// function
{
	int *c,i;
	for(i=0;i<10;i++)
	{
		x[i]=x[i]*x[i];
	}
	p=x;
	return p;
} 
