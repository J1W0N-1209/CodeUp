#include <stdio.h>

int main() {
	int num1,num2,num3,i,j,k,cnt = 0;
	scanf("%d %d %d",&num1,&num2,&num3);
	for(i = 0;i < num1;i++) {
		for (j=0;j < num2;j++) {
			for (k=0;k < num3;k++) {
				printf("%d %d %d\n",i,j,k);
				cnt += 1;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
