#include<stdio.h>
int main()
{
	struct book
	{
		char authorname[20];
		char name[20];
		int title;
		int available;
	} ;
	struct book programming,*p;
	printf("the size of pointer to structure is %d",sizeof(p));
	return 0;
}
