// standard input and output
#include <stdio.h>
#include <string.h>

// creates a constant. It is not a requirement to put this variable in all caps, but C developers generally do it this way
#define MYNAME "Falon Darville"

// accessible to all functions
int globalVar = 100;

// where the computer starts executing your code
// when you do not define the type, it will default to int, but it still throws me an warning in terminal. Note that this does not prevent me from compiling and running the code.
int main(){

	// characters must be surrounded by single quotes
	char firstLetter = 'D';

	// int is any whole number without decimal places. It can be either positive or negative
	// range of int is between -32,768 and 32,768
	int age = 38;

	// long int can be used for numbers larger than int allows
	// don't use commas
	long int superBigNum = -32678000;

	// use float if your number contains decimals
	// a float can be as big as 38 decimal points in length
	float piValue = 3.14159;

	// use for larger numbers with decimal point
	double reallyLargeNum = 3.1415914159141591415914159;

	// new line 
	printf("\n");

	printf("This will print to screen\n\n");

	// use %d and pass through the variable that you would like to populate there. 
	// %d means print an integer
	printf("I am %d years old\n\n", age);

	// this prints large numbers
	printf("Big Number = %ld\n\n", superBigNum);

	// print a float with %.5f and add the number of decimal places that you would like appear instead of the 5. In the following, we will be printing 5 decimal places.
	printf("Pi = %.5f\n\n", piValue);

	// to print doubles, use %f as well. 
	printf("Big float = %.15f\n\n", reallyLargeNum);

	// print characters
	printf("The first letter in my last name is %c\n\n", firstLetter);

	// print a string
	printf("My name is %s\n\n", "Falon");

	// print a string by creating an array
	// this is called a character array
	char myName[] = "Falon Darville";

	// string copy allow you to change the value of this string array
	// the reason that we can do the following is because of #include <string.h> at the top of the file
	strcpy(myName, "Bob Smith");

	printf("My name is %s\n\n", myName);
}

