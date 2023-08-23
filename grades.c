#include<stdio.h>
int main() {
	int x;
	x = 77;

	if(x>=45 && x<=50) {
		printf("Grade: O+");
	}	
	if(x>=35 && x<=44) {
		printf("Grade: O");
	}
	if(x>=25 && x<=34) {
		printf("Grade: A+");
	}
	if(x>=20 && x<=24) {
		printf("Grade: A");
	}
	if(x<20) {
		printf("Grade: F");
	}
	if(x>50) {
		printf("Invalid marks");
	}

	return 0;
}
