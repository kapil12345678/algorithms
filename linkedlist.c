#include<stdio.h>
#include<stdlib.h>
#define errormessage(node) if(node==NULL){ \
				   printf("system out of memory \n");\
				   exit(0);\
				}
struct link
{
	int data;
	struct link *next;
};
void detelist(struct link *node,int n);
void createlist(struct link *node);
void insertlist(struct link *node);
//void displaylist(struct link *node);
int main()
{
	int n;
	struct link *node;
	node=(struct link *)malloc(sizeof(struct link));
	char ch;
	errormessage(node);
	createlist(node);
	printf("the values of n are as follows \n");
	displaylist(node);
	printf("do you wish to deete any element  press y to continue and any key to exit \n");
	/*if(((ch=getchar())!='y')||ch!='Y')
	{
		printf("enter the serial number of the element you want to delete \n");
		scanf("%d",&n);
		deletelist(node,n);
	}*/
	else
	{
		printf("exitting the program \n");
		return 0;
	}
	return 0;
}
void createlist(struct link *node)
{
	int i=1;
	char ch;
	printf("enter your element for %d element \n",i++);
	scanf("%d%*c",&node->data);
	node->next=NULL;
	printf("press c to continue and n to exit and d to display the present linked list \n");
	for(;;)
	{
		printf("enter your option \n");
		ch=getchar();
		if(ch=='c'||ch=='C')
		{

			node->next=(struct link *)malloc(sizeof(struct link));
			errormessage(node);
			node=node->next;
			printf("enter the value for %d element \n",i++);
			scanf("%d%*c",&node->data);

		}
		else if(ch=='d'||ch=='D')
			displaylist(node);
		else if(ch=='n'||ch=='N')
			break;
		else
			printf("you have not entered the correct option \n");
	}
}
void displaylist(struct link *node)
{
	int i=1;
	while(node!=NULL)
	{
		printf("the value of %d element is %d\n",i++,node->data);
		node=node->next;
	}
}
void insertelement(struct link *node)
{
	int n,i;
	struct link *insert;
	printf("enter the position you want to insert the string \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		node=node->next;


/*void deletelist(struct link *node,int n)
{
	int i;
	struct link *temp1,*temp2,*clear;
	for(i=0;i<n-2;i++)
	{
		node=node->next;
	}
	temp1=node->next;
	clear=node=node->next;
	node=node->next;
	temp2->next=node;
	free(clear);
	
}*/







