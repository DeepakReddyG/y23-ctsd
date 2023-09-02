/*
write a c program to calc to sum of last two digits of x and last one digit of y
*/
#include<stdio.h>
int main() {
	int x, y, a, b, sum;
	printf("Input x & y values: ");
	scanf("%d%d", &x, &y);
	a = x%100;
	b = y%10;
	sum = a+b;
	printf("sum = %d",sum); 
	return 0;
}
