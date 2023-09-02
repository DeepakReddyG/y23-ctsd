#include<stdio.h>
#include<stdlib.h>
int main() {
	int x;
	printf("Input x value: ");
	scanf("%d", &x);

	if(x<0) {
		x = abs(x);
	}
	printf("%d", x);
	return 0;
}
