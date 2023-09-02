//convert a negative number to positive number. 
#include<stdio.h>
int main() {
	int num;
	printf("Input num: ");
	scanf("%d", &num);
	if(num<0) {
		num = num*-1;
	}
	printf("%d", num);

	return 0;
}
