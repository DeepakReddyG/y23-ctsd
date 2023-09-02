//C program to compute the square of a given number
#include<stdio.h>
#include<math.h>
int main() {
	int x, result;
	printf("Input x value: ");
	scanf("%d", &x);
	result = pow(x, 2);
	printf("%d", result);	
	return 0;
}
