#include <stdio.h>
void main() 
{
		int n;
		printf("you have entered %d\n", ({scanf("%d", &n); n; }));

}
