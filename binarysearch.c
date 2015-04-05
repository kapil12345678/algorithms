#include<stdio.h>
#include<stdlib.h>
int binarysearch(int *a,int size);
int main()
{
	int *a,i,size;
	printf("enter the size of the list \n");
	scanf("%d",&size);
	a=(int *)calloc(size,sizeof(int));
	if(a==NULL)
	{
		printf("the memory could not be allocated \n");
		return 0;
	}
	printf("enter your elements \n");
	for(i=0;i<size;i++)
		scanf("%d",a+i);
	if(!binarysearch(a,size)) // a function call inside if
		printf("element not found in the list \n");
	return 0;
}
int  binarysearch(int *a,int size)
{
	int low=0,middle=0,high=size,n;
	printf("enter the element you want to search for \n");
	scanf("%d",&n);
	while(low<=high)
	{
		middle=(low+high)/2;
		if(n==a[middle])
		{
			printf("element found at %d position \n",middle+1);
			return 1;
		}
		else if(n>a[middle])
			low=middle+1;
		else if(n<a[middle])
			high=middle-1;
		else
		{
			return 0;
		}
	}
	return 0;
}






