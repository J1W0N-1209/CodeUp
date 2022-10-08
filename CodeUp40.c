#include <stdio.h>

int main() {
	int i,j;
	scanf("%d %d",&i,&j);
	printf("%d\n",i + j);
	printf("%d\n",i - j);
	printf("%d\n",i * j);
	printf("%d\n",i / j);
	printf("%d\n",i % j);
	printf("%.2f\n",(double)i / j);
	return 0;
}
