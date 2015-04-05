#include <stdio.h> 
int main()
{
	int i;
	for(i=0;i<10000;i++) 
	printf("Current time: %s\n",__TIME__); 
	return 0;
}

