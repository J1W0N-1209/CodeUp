#include <stdio.h>

int main()
{
	int num,i,total = 0;
	scanf("%d",&num);
	for (i = 0;i <= num;i++) {
		if(i % 2 == 0) {
			total += i;
		}
	}
	printf("%d",total);
}
