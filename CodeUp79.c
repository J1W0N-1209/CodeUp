#include <stdio.h>

int main() {
	int h,b,c,s;
	double mb;
	scanf("%d %d %d %d",&h,&b,&c,&s);
	mb = (h * b * c * s) / 800000;
	mb /= 10;
	printf("%.1f MB",mb);
	return 0;
}
