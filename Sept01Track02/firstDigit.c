/*
Write a c program to extract the first digit of a number
*/
#include<stdio.h>
#include<math.h>
int main() {
	int x,size, first;
	printf("Input x value: ");
	scanf("%d", &x);
	size = log10(x)+1;
	first = x/pow(10,size-1);
	printf("First Digit = %d", first);
	return 0;
}
