#include<stdio.h>
#include<stdlib.h>
struct book
{
	char name[32];
	int sold;
	int left;
};
struct 
book *information();
int main()
{
	struct book *p;
	printf("enter your information \n");
	p=information();
 	printf("you have entered the following \n %s %d %d ",p->name,p->left,p->sold);
	free(p);
	return 0;
}
	struct
book *information()
{
	int i;
	struct book *a=(struct book *)malloc(30*sizeof(struct book));


	printf("enter the book name \n");
	scanf("%s",&(a)->name);
	printf("enter the number of books left \n");
	scanf("%d",&(a)->left);
	printf("enter the number book sold \n");
	scanf("%d",&(a)->sold);

	return a;
}
