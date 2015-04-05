#include<stdio.h>
int change(int *p);
int main()
{
	int a[3]={1,2,3};
	change(a);
	return 0;
}
int change(int *p)
{
	int i;
	for(i=0;i<3;i++)
		cout << "The result is " << *(p+i);
	return 0;
}

