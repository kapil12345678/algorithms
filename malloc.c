#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
	int i,j,n;
	char *p[100],ch[100];


	// the whole for loop is for checking error in n
	for(i=1,n=strlen(argv[1]);i<n;i++)
	{
		if(argv[1][i]=='.')
		{
			printf("your input was not correct \n");
			return 0;
		}
		if(argv[1][i]=='-')
		{
			printf("your input was not correct \n");
			return 0;
		}
		if(isalpha(argv[1][i])!=0)
		{
			printf("your input was not correct indeed");
			return 0;
		}
	}


	printf("enter the number of lines  \n");
	scanf("%d",&n);
	printf("enter your sentence \n");
	for(j=0;j<=n;j++)
	{
		for(i=0;((ch[i]=getchar())!='\n');i++)
			;
		p[j]=calloc(i,sizeof(char));
		strcpy(p[j],ch);
	}
	printf("you have entered the following \n");
	for(j=0;j<=n;j++)
	{
		printf("%s\n",p[j]);
		free(p[j]);
	}
	return 0;
}

