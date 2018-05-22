// standard input and output
#include <stdio.h>
#include <string.h>

int main(){

	char middleInitial;

	printf("What is your middle name?");

	// receive input from our users
	// the second argument tells C where to save the variable that the user has inputted
	// note that you are telling the program with %c what type of data you are getting. You need to include a space before you define this within quotation marks.
	// if the user inputs more than one character, or strings with a space between them, the information would be ignored. 
	// When I put in a full name, it cut off everything after the first letter
	scanf(" %c", &middleInitial);

	// prints the user input that was saved to the middleInitial variable
	printf("Your middle initial is %c\n\n", middleInitial);

	char firstName[30], lastName[30];

	printf("What is your name?");

	scanf(" %s %s", firstName, lastName);

	printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);

	int month, day, year;

	printf("What is your birth date?");

	scanf(" %d/%d/%d", &month, &day, &year);

	printf("\nBirth Date %d/%d/%d\n\n", month, day, year);
}