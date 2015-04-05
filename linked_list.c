#include<stdio.h>
#include<stdlib.h>
struct node
{
	int member;
	struct node *next;
};
int main()
{
	int i,n;
	static int *head;
	struct node *p;
	printf("how many elements do you want to enter \n");
	scanf("%d",&n);
	if(n>0)
	{
		p=(struct node *)malloc(sizeof(struct node));
			printf("enter your element \n");
			scanf("%d",&(p)->member);
		head=&(p)->member;
	}
	for(i=0;i<n;i++)
	{
		p=(struct node *)malloc(sizeof(struct node));
		printf("enter your element \n");
		scanf("%d",&(p)->member);
		node.next=&(p)->member;
	}
	return 0;
}
		







