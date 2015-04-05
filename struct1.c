#include<stdio.h>
#include<string.h>
struct book
{
	char title[30];
	char athrnm[20];
	int  bookid;
	int available;
};
int main()
{
	struct book code[10];
	int i,j;
	char s[1];
	printf("\t\t\tenter the details of programming books \n\n\n");
	for(i=0;i<5;i++)
	{
		printf("enter the title of book\n"); 
		gets(code[i].title);
		printf("enter the name of author \n");
		gets(code[i].athrnm);
		printf("enter the book title number\n");
		scanf("%d",&code[i].bookid);
		printf("enter the number of books left in stock \n");
		scanf("%d",&code[i].available);
		gets(s);
	}
	printf("the following is the information available for the books of programming \n");
	printf("%-4s\t%-20s%-20s%-13s%-5s\n","s.no","tile" ,"author","title number","  books left");
	for(i=0;i<5;i++)
	{
		printf("%-4d\t%-20s%-20s%-13d%-5d\n",i+1,code[i].title,code[i].athrnm,code[i].bookid,code[i].available);	
	}
	return 0;
}

	
