#include<stdio.h>
#define stringcat(a,b) #a###b

int main()
{
	printf("the concatenated string is %s \n",stringcat(kapil,sharma));
	return 0;
}
