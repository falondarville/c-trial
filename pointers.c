#include <stdio.h>
// standard library
#include <stdlib.h>

void generateTwoRandomNums(int num1, int num2){

	// generate random number from one to fifty
	num1 = rand() % 50 + 1;

	num2 = rand() % 50 + 1;

	printf("New random number in function = %d\n\n", num1);

	printf("New second random number in function = %d\n\n", num2);
}

void pointerRandomNumbers(int* num1, int* num2){

	// generate random number from one to fifty
	*num1 = rand() % 50 + 1;

	*num2 = rand() % 50 + 1;

	printf("New random number in function = %d\n\n", *num1);

	printf("New second random number in function = %d\n\n", *num2);
}

void main(){

	printf("\n");

	int rand1 = 12, rand2 = 15;

	// prints the location in storage of these integers
	printf("rand1 = %p : rand2 = %p \n\n", &rand1, &rand2);

	// prints the decimal versions of the same addresses as above
	printf("rand1 = %d : rand2 = %d \n\n", &rand1, &rand2);

	printf("Size of int %d\n\n", sizeof(rand1));

	// the location of the variable is now stored, using a pointer
	int * pRand1 = &rand1;

	printf("Pointer %d \n\n", &pRand1);

	// dereferencing the pointer means using the pointer to access the variable
	printf("Value %d\n\n", *pRand1);


	// the following two print functions both print the first item in the array
	int primeNumbers[] = {2, 3, 5, 7};

	printf("First index using specification of 0 index position: %d\n\n", primeNumbers[0]);

	printf("First index using pointer: %d\n\n", *primeNumbers);

	// use pointer arithmetic to grab the second value in the array, essentially you are adding one to the address (or skik four bits forward since we are using integers)
	printf("Second index using pointer: %d\n\n", *primeNumbers + 1);

	// working with arrays of strings
	char * students[4] = {"Sally", "Mark", "Paul", "Sue"};

	for(int i = 0; i < 4; i++){
		printf("%s : %d\n\n", students[i], &students[i]);
	}

	// using pointers with functions
	int num1 = 0, num2 = 0;

	generateTwoRandomNums(num1, num2);

	printf("Main before function call\n\n");

	printf("num1 = %d\n\n", num1);

	printf("num2 = %d\n\n", num2);

	printf("Main after function call\n\n");

	// the ampersands gives us the address of the variable
	pointerRandomNumbers(&num1, &num2);

	printf("num1 = %d\n\n", num1);

	printf("num2 = %d\n\n", num2);
}





