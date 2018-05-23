#include <stdio.h>
#include <stdlib.h>

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

}