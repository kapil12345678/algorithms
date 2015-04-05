#include<stdio.h>
struct a
{
	char name[20];
	char profession[20];
} ;

struct a accept(struct a b);

int main()
{
	struct a b,c;
	c=accept(b);
	printf("you have entered the following \n");
	printf("%s %s ",c.name,c.profession);
	return 0;
}

struct a accept(struct a b)
{
	printf("enter your name \n");
	scanf("%s",b.name);
	printf("enter your profession \n");
	scanf("%s",b.profession);
	return b;
}




	
