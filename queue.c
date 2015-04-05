#include<stdio.h>
#define garbage char gar=getchar();
void createqueue(int *a);
void displayqueue(int *a);
void popqueue(int *a);
int count=0;
int main()
{
	int a[10];
	char ch;
	printf("enter e to enter, r to remove and d to display the current elements in the queue and q to quit \n");
	for(;;)
	{
		printf("enter your choice\n");
		ch=getchar();
		if(ch=='e'||ch=='E')
		{
			createqueue(a);
		}
		else if(ch=='r'||ch=='R')
			popqueue(a);
		else if(ch=='d'||ch=='D')
			displayqueue(a);
		else if(ch=='q'||ch=='Q')
			break;
		else
			printf("Invalid choice please try again \n");
		garbage;
	}
	printf("'the entire list in the queue is \n");
	displayqueue(a);
	return 0;
}
void createqueue(int *a)
{
	if(count<10)
	{
		printf("enter your element \n");
		scanf("%d",a+count);
		count++;
	}
	else
	{
		printf("the queue is full please pop some element(s)");
	}
}
void displayqueue(int *a)
{
	int i;
	for(i=0;i<count;i++)
		printf("%d\n",*(a+i));
}
void popqueue(int *a)
{
	int i;
	if(count>0)
	{
		count--;
		printf("the popped element is %d \n",*a);
		for(i=0;i<count;i++)
			a[i]=a[i+1];
	}
	else
		printf("there are no elements in the queue to pop \n");
}
	








