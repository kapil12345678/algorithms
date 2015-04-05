#include <stdio.h>

int main () {
	int i;
	int test[10];
	char string[81],s[1];

	for(i = 0; i < 10; i++){
		scanf("%d", &test[i]);
	}
	gets(s);

	for(i=0; i < 7; i++){
		gets(string);
		printf("String was entered\n");
	}

}
