/*
write a C program to check whether the first and last digits are equal or not
*/

#include<stdio.h>
#include<math.h>
int main() {
	int numb, first, last, digitsCount;
	printf("Input numb value: ");
	scanf("%d", &numb);
	digitsCount = log10(numb)+1;
  printf("Digits Count in %d = %d\n", numb, digitsCount);
  first = numb/pow(10, digitsCount-1);
  printf("First digit in %d = %d\n", numb, first);
  last = numb%10;
  printf("Last digit in %d = %d\n", numb, last);
  if(first == last) {
    printf("Equal");
  }
  else {
    printf("Not Equal");
  }
  return 0;
}
