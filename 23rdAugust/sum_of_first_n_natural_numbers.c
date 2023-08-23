//C program to compute sum of first N natural numbers
//formula: (n*(n+1))/2

#include<stdio.h>
int main() {
	int sum, n;
	n = 9;
	sum = (n*(n+1))/2;
	printf("%d", sum);
	return 0;
}
