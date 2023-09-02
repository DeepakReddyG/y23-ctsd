/*
write a C program to check whether last digit of the given number is even 
or odd
*/
#include<stdio.h>
int main() {
	int x, y;
	printf("Input x value: ");
	scanf("%d", &x);
	y = x%10;
	if(y%2==0) {
		printf("EVEN");
	}
	else {
		printf("ODD");
	}

	return 0;
}
