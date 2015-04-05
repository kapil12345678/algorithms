#include<stdio.h>
struct a
{
	char name[10];
	char profession[10];
};

void call(struct a b);
int main()
{
	struct a b;
	call(b);
	return 0;
}

void call(struct a b) 
{
	printf("enter your name \n");
	scanf("%s",b.name);
	printf("enter your profession \n");
	scanf("%s",b.profession);
	printf("you have entered the following \n");
	printf("%s\n %s \n ",b.name,b.profession);
	
}

