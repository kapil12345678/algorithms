#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *change(char a[]);
int main()
{
	char *ch;
	ch=(char *)malloc(30* sizeof(char));
	printf("enter your name");
	gets(ch); 
	printf("your name has been changed to %s",change(ch[30]));
	return 0;
}
char *change(char s[]);
{
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
	
