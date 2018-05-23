#include <stdio.h>

int main(){

	printf("\n");

	// a char takes up 1 byte
	printf("A char takes up %d bytes.\n", sizeof(char));

	// an int takes up 4 bytes
	printf("An int takes up %d bytes.\n", sizeof(int));

	// a long int takes up 8 bytes
	printf("A long int takes up %d bytes.\n", sizeof(long int));

	// a float takes up 4 bytes
	printf("A float takes up %d bytes.\n", sizeof(float));

	// a double takes up 8 bytes
	printf("A double takes up %d bytes.\n", sizeof(double));

	// bit is short for binary digit, and can only be a 1 or a 0
	// byte is generally considered to be 8 bits

	// 00000000 is one byte made up of 8 bits

	long int bigInt = 2147483648;

	// this gets a negative number because it exceeds the maximum value allowed for an int. Change the final number to 7 and you will get a positive number.
	printf("I'm bigger than you may have heard %d\n\n", bigInt);

	// program to tell user the top value for the number of bits that they input
	int numberHowBig = 0;

	// 0: print what is given
	// 1: print what is given
	// 2: 1 + 2 = 3 (11 in binary)
	// 3: 3 + 4 = 7	(111 in binary)
	// 4: 7 + 8 = 15 (1111 in binary)

	printf("How many bits? \n");
	scanf(" %d", &numberHowBig);
	printf("\n\n");

	int myIncrementor = 1, myMultiplier = 1, finalValue = 1;

	// note that if you type in 32, you will get negative numbers because 31 is the largest bit size that can be stored.
	while(myIncrementor < numberHowBig){
		myMultiplier *= 2;
		finalValue = finalValue + myMultiplier;
		myIncrementor++;
	}

	if((numberHowBig == 0) || (numberHowBig ==1)){
		printf("Top value: %d\n\n", numberHowBig);
	} else {
		printf("Top value: %d\n\n", finalValue);
	}

	// user guesses a secret number
	int secretNumber = 10, numberGuessed = 0;

	while(1){
		printf("Guess my secret number\n");
		scanf(" %d", &numberGuessed);

		if(numberGuessed == secretNumber){
			printf("You got it!\n");
			break;
		}
	}

	// ask user for the size of shirt they would like until you get one of the three options, S, M, L. Note that I got an infinite program when I did not add the scanf portion that saves the variable. 
	char sizeOfShirt;

	do{
		printf("What size of shirt? (S, M, L)\n");
		scanf(" %c", &sizeOfShirt);
	} while (sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');

	// for loop
	// use continue to skip and increment the counter. In this case, we are using continue to only print out odd numbers.
	for(int counter = 0; counter <= 40; counter++){

		if((counter % 2) == 0) continue;

		printf("%d\n", counter);
	}

}






