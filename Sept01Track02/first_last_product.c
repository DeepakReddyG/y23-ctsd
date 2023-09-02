/*
write a c program to read two values x and y and compute the product of first digit 
of x and last digit of y
*/
#include<stdio.h>
#include<math.h>
int main() {
	int x, y, first, last, product, size;
	printf("Input x and y values: ");
	scanf("%d%d", &x, &y);
	size = log10(x)+1;
	first = x/pow(10, size-1);
	last = y%10;
	product = first*last;
	printf("Product = %d", product);
	return 0;
}
