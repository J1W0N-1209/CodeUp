#include <stdio.h>

int main() {
	int num,i;
	scanf("%d",&num);
	for(i = 1;i <= num;i++) {
		if(i % 3 == 0) {
			printf("X ");
			continue;
		}
		printf("%d ",i);
	}
	return 0;
}
