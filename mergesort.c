#include<stdio.h>
#define 
breaklist(int *a,int *b);
int main()
{
	int a[10],b[10],i;
	printf("enter your element \n");
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	breaklist(a,b);
	return 0;
}
breaklist(int *a,int *b)
{
	int i=0;
	while(i<10)
		*a++=*b++

