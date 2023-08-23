/*
compute the sum of first x natural numbers and check whether it is 
even or odd. 
*/

#include<stdio.h>
int main() {
	int sum, x;
	x = 11;
	sum = (x*(x+1))/2;
	printf("%d\n", sum);

	if(sum%2 == 0) {
		printf("EVEN");
	}
	else {
		printf("ODD");
	}

	return 0;
}
