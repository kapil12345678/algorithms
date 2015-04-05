#include<stdio.h>
struct student
{
	char name[22];
	char rollno[12];
	unsigned long long int phno;

};
int main()
{
	int i,j;
	char c[1];
	struct student cse[10],*p;
	p=cse;
	for(i=0;i<3;i++)
	{
		printf("enter student name\n");
		gets(cse[i].name);
		printf("enter student roll number \n");
		gets(cse[i].rollno);
		printf("enter student phone number \n");
		scanf("%llu",&cse[i].phno);
		gets(c);
	}
	for(i=0;i<3;i++);
	printf("the following is the information about CSE B student\n");
	printf("%-6s%-24s%-14s%-14s \n","S.no","student Name","Roll no","phone no.");
	for(i=0;i<3;i++)
	{
		printf("%-6d%-24s%-20s%-14llu \n",i+1,(*p).name,(*p).rollno,(*p).phno);
		++p;
	}
	return 0;
}
		

