/* write a C program to print the first digit of a number */

#include<stdio.h>
#include<math.h>
int main() {
	int x, y, s;
	printf("Input x value: ");
	scanf("%d", &x);
	s = log10(x)+1;
	printf("Count of digits in x = %d\n", s);
	y = x/pow(10, s-1);
	printf("The value of y = %d", y);
	return 0;
}
