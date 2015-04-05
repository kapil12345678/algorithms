#include<stdio.h>
#define concat(str1,str2) #str1#str2
int main()
{
	char a[10],b[10];
	printf("enter two strings \n");
	scanf("%s %s",a,b);
	printf("the concatenated string is %s \n",concat(a,b));
	return 0;
}
