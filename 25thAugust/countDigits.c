//Write a C program to count the number of digits in a given number

#include<stdio.h>
#include<math.h>
int main() {
	int x, y;
	printf("Input x value: ");
	scanf("%d", &x);
	printf("Value of x = %d\n",x);
	y = log10(x)+1;
	printf("Digits in x = %d", y);
	return 0;
}
