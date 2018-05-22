// standard input and output
#include <stdio.h>
#include <string.h>

int main(){

	int num1 = 12, num2 = 15, numAns;

	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;

	printf("Integer Calculation %d\n\n", num2 / num1);

	printf("Float Calculation %f\n\n", decimal2 / decimal1);

	printf("Modulus %d\n\n", num2 % num1);

	// demonstrates pertinence of order of operations
	printf("Within Parentheses %d\n\n", 3 + 6 * 10);

	printf("With Parentheses %d\n\n", (3 + 6) * 10);

	int randomNum = 1;

	// concatenated operations
	printf("1 += 2 : \n", randomNum += 2);

	// this is a problematic way to make calculations
	// it prints: 3 += 2: 5 even though randomNum has the value of 1. What happens is that it did the calculation on the second part, and got the total of 3, then it assigned the 3 to the variable and displayed it as randomNum. 
	printf("%d += 2: %d\n\n", randomNum, randomNum += 2);

	int numberEx = 12;

	float numberEx2 = 1.234;

	// here we are telling the program that we would like the result displayed as a float
	printf("numberEx / numberEx2 : %f\n\n", (float) numberEx/ numberEx2);
}