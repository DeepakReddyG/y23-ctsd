/*
write a c program to check whether the last digit of given number
is even or odd
if even --> print EVEN
else --> print ODD
*/
#include<stdio.h>
int main() {
	int num, last;
	printf("Input num: ");
	scanf("%d", &num);
	last = num%10;
	if(last%2==0) {
		printf("EVEN");
	}
	else {
		printf("ODD");
	}
	return 0;
}
