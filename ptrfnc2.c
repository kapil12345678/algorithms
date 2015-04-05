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
	int i;
	char *ch=(char *)malloc(30*sizeof(char));
	for(i=0;i<30;i++)
	{
		if(s[i]=='k')
		{
			ch[i]='a';
		} 
	}
	return ch;
}


