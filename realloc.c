#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p;
	p=calloc(10,sizeof(char));
	p="kapil kumar sharma";
	printf("the address of pointer is %p and size of the string  is %d and the string is %s",p,strlen(p),p);
	return 0;
}

	
