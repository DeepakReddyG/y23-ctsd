#include<stdio.h>
#include<math.h>
int main() {
	int x,y,a,b,size;
	printf("Input x,y values: ");
	scanf("%d%d",&x,&y);
	size=log10(x)+1;
	a=x/pow(10,size-1);
	b=y%10;
	if(a>b) {
		printf("%d is Greater", a);
	}
	else {
		printf("%d is greater", b);
	}
        return 0;
}
