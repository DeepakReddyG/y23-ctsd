#include<stdio.h>
int main() {
	int mark, t = 0;
	printf("Input mark: ");
	scanf("%d", &mark);
	if(mark>=45 && mark<=50) {
		printf("Grade: O+");
		t++;
	}
	else if(mark>=35 && mark<=44) {
		printf("Grade: O");
		t = t+2;
	}
	else if(mark>=25 && mark<=34) {
		printf("Grade: A+");
		t = t+3;
	}
	else if(mark>=20 && mark<=24){
		printf("Grade: A");
		t = t+4;
	}
	else if(mark<20 && mark>=0) {
		printf("Grade: F");
		t = t+5;
	}
	else {
		printf("Invalid marks");
		t = t+6;	
	}
	
	printf("\nTime taken = %d", t);
	return 0;
}
