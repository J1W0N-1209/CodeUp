#include <stdio.h>

int main() {
	int num1,num2,num3,min;
	scanf("%d %d %d",&num1,&num2,&num3);
	min = (num1 > num2) > (num1 < num2 ) ? ((num2 > num3) > (num2 < num3) ? num3 : num2 ) : ((num1 > num3) > (num1 < num3) ? num3 : num1 );
	printf("%d",min);
	return 0;
}
