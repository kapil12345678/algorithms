#include<stdio.h>
#include<stdlib.h>
char *change(char s[]);
int main()
{
	char s[10];
	int i;
	printf("enter your string \n");
	scanf("%s",s);
	
	printf("the changed string is %s",change(s[10]));
	return 0;
}
char *change(char s[])
{
	char *k=(char *)malloc(10*sizeof(char));
	k="changed";
	return k;
}

