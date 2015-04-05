#include<stdio.h>

struct book
{
	char name[30];
	int sold;
	int left;
};

void change(struct book *p);

int main()
{
	char ch;
	int i;
	struct book program[10];
	printf("please enter the information \n ");
	for(i=0;i<0;i++)
	{
		printf(" enter the name of author \n");
		scanf("%s", program[i].name);
		printf(" enter the number of book sold \n ");
		scanf("%d", &(program[i].sold));
		printf("enter the number of book left \n");
		scanf("%d", &(program[i].left));
	}

	printf("the following is the information available \n");
	for(i=0;i<0;i++)
	{
		printf("%s  %d   %d", (*(program+i)).name, (*(program+i)).sold, (*(program+i)).left);
	}
	printf("Do you want to change any data \n press y if yes and any key for no \n");
	ch=getchar();
	if((ch=='y')||(ch=='Y'))
	{
		change(program);
		printf("the following is the information available \n");
		for(i=0;i<0;i++)
		{
			printf("%s  %d   %d", (program+i)->name, (program+i)->sold, (program+i)->left);
		}

	}
	else
	{
		return 0;
	}
	return 0;
}

void change(struct book *p)
{
	int i;
	for(i=0;i<0;i++)
	{
		printf("enter your data for book %s \n", (p+i)->name);
		printf(" enter the number of book sold \n ");
		scanf("%d", &((p+i)->sold));
		printf("enter the number of book left \n");
		scanf("%d", &((p+i)->left));
	}
}

