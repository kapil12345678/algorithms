#include<stdio.h>
#include<stdlib.h>
struct data
{
	int  raw;
	struct data *complete;
};
int main()
{
	struct data *info;
	info=(struct data *)malloc(sizeof(struct data));
	complete=&node;
	printf("the address of main pointers is  %d and memory is %d and" 
	"size of sub pointer is %d and memory is %d ",info,sizeof(struct data *info),complete,sizeof(struct data *complete));
	return 0;
}

