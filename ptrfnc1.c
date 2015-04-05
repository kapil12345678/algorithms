#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ch[30];
char *change(char *s);
int main()
{
	char s[30];
	char *c;
	printf("enter your name");
	gets(s);
	 
	c=change(s);
	printf("your name has been changed to %s",c);
	return 0;
}
char *change(char *s)
{
	int i;
	
	for(i=0;*(s+i)!='\n';i++)
	{
		if(*(s+i)=='k')
		{
			ch[i]='a';
		}
		else
		{
			ch[i]=*(s+i);
		}
	}
	return ch;
}

