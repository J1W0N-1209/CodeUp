#include <stdio.h>

int main() {
	int num;
	scanf("%d",&num);
	if(num < 0) {
		printf("minus\n");
		if(num % 2 == 0) {
			printf("even");
		} else {
			printf("odd");
		}
	}
	else if(num >= 0) {
		printf("plus\n");
		if(num % 2 == 0) {
			printf("even");
		} else {
			printf("odd");
		}
	}
	return 0;
}
