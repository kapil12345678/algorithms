#include<stdio.h>
struct record
{
	int i;
	char ch[20];
};
int main()
{
	struct record a,*b;
	b=&a;    
	printf("intial pointer is %p and final is %p and size is %d",b++,b,sizeof(a));
	return 0;
}

