#include<stdio.h>
int main()
{
	int i;
	printf("enter your number \n");
	scanf("%c",&i);
	printf("%s",i==10?"no input received please enter again",scanf("%c",&i):"\n\n\n");
	printf("you have entered %d",i);
	return 0;
}	
