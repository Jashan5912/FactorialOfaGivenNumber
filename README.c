#include <stdio.h>

void main(){

	int number, i, factorial = 1;

	printf("Enter the Number to find Factorial\n");

	scanf("%d", &number);

	for(i = 1; i <= number; i++){

	    factorial = factorial * i;

	}

	printf( "factorial of given number =%d", factorial );

}
