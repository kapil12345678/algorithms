#include<stdio.h>
int main()
{
	int a[10],i,bottem=0,num;
	char ch;
	printf("enter y for push and n for pop and e for exit and press s anytime to show current position of stack \n\n ");
	for(;;)
	{
		printf("do you want push or pop element \n");
		ch=getchar();
		if(ch=='y'||ch=='Y')
		{

			if(bottem>9)
				printf("the stack is full \n");

			else
			{
				printf("enter the element \n");
				scanf("%d",&num);
				for(i=8;i>=0;i--)
					a[i+1]=a[i];
				a[0]=num;
				bottem++;
			}
			ch=getchar();
		}
		else if(ch=='n'||ch=='N')
		{
			if(bottem<=0)
				printf("the stack is empty \n");
			else
			{
				printf("the value is %d \n",a[0]);
				for(i=0;i<9;i++)
					a[i]=a[i+1];
				bottem--;
			}
			ch=getchar();

		}
		else if(ch=='e'||ch=='E')
			break;	
		else if(ch=='s'||ch=='S')
		{
			printf("\n\n");
			for(i=0;i<bottem;i++)
				printf("%d\n",a[i]);
			printf("\n\n");
		}
		else 
			printf("your input was not correct please try again \n");


		printf("you have entered the following \n");
		for(i=0;i<bottem;i++)
			printf("%d\n",a[i]);
	}
		return 0;
}
