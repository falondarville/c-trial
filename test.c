// standard input and output
#include <stdio.h>
#include <string.h>

int main(){
	printf("Hello World!\n");
}

// creates a constant. It is not a requirement to put this variable in all caps, but C developers generally do it this way
#define MYNAME "Falon Darville"

// accessible to all functions
int globalVar = 100;

// where the computer starts executing your code
main(){

	// characters must be surrounded by single quotes
	char firstLetter = 'D';

	// int is any whole number without decimal places. It can be either positive or negative
	// range of int is between -32,768 and 32,768
	int age = 38;

	// long int can be used for numbers larger than int allows
	// don't use commas
	long int superBigNum = -32678000;

	// use float if your number contains decimals
	float piValue = 3.14159;

}

