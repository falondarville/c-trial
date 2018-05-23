#include <stdio.h>

int main(){

	printf("\n");

	int num1 = 1, num2 = 2;

	// instead of true or false, C prints out 1 or 0 and saves these as integers. 
	printf("Is 1 > 2: %d\n\n", num1 > num2);

	// note that if two conditions are true, only the first condition met appears.
	if(num1 > num2){
		printf("%d is greater than %d\n\n", num1, num2);
	} else if (num1 < num2) {
		printf("%d is less than %d\n\n", num1, num2);
	} else {
		printf("%d is equal to %d\n\n", num1, num2);
	}

	int custAge = 38;

	// note that you do not need curly braces if the code appears all on one line. In this instance, you would typically put the print portion in curly braces.
	if(custAge > 21 && custAge < 35) printf("They are welcome");
	else printf("They are not welcome\n\n");

	printf("! turns a true into a false: %d \n", !1);

	int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;

	if(bobMissedDays < 10){
		if(bobTotalSales < 30000 || bobNewCust > 30){
			printf("Bob gets a raise.\n");
		}
	} else {
		printf("Bob doesn't get a raise.\n");
	}

	custAge = 38;

	// this is a condition statement. If the custAge is greater than 21, we will get back true, otherwise we will get back false. %s expects a string
	char* legalAge = (custAge > 21) ? "true" : "false";

	printf("Is the customer of legal age? %s\n\n", legalAge);

	int numOfProducts = 10;

	printf("I bought %s products.\n\n",
		(numOfProducts > 1) ? "many" : "one");
}