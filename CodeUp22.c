#include <stdio.h>
#include <string.h>
int main() {
	char name[30];
	int i;
	scanf("%s",name);
	for(i = 0;i < strlen(name);i++) {
		printf("\'%c\'\n",name[i]);
	}
	
	return 0;
}
