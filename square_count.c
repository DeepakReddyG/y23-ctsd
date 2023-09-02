/*
C program to compute the number of digits in the square of a 
given number
*/
#include<stdio.h>
#include<math.h>
int main() {
	int x, ans, count;
	printf("Input x value: ");
	scanf("%d", &x);
	ans = pow(x, 2);
	printf("square of x = %d\n", ans);
	count = log10(ans)+1;
	printf("Count of digits in square of x = %d", count);
	return 0;
}

