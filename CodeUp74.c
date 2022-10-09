#include <stdio.h>

int main()
{
	int num,i,total = 0;
	scanf("%d",&num);
	for(i = 0;i <= num;i++) {
		total += i;
		if(total >= num) {
			break;
		}
	}
	printf("%d",i);
	
}
