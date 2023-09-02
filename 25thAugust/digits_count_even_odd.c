/*
Write a C program to check whether a given number (say x) has an even digit count 
or an odd digit count. 
*/

#include<stdio.h>
#include<math.h>
int main() {
	int number, count;
	printf("Input number: ");
	scanf("%d", &number);
	count = log10(number)+1;
	printf("Count = %d\n", count);
	if(count%2==0) {
		printf("EVEN");
	}
	else {
		printf("ODD");
	}
	return 0;
}
