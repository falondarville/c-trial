#include <stdio.h>
#include <stdlib.h>

void editMessageSent(char* message, int size){
	char newMessage[] = "New Message";

	if(size > sizeof(newMessage)){
		for(int i = 0; i < sizeof(newMessage); i++){
			message[i] = newMessage[i];
		}
	} else {
		printf("New message is too big.\n");
	}
}

int main() {

	printf("\n");

	char randomMessage[] = "Edit my function";

	printf("Old message: %s \n\n", randomMessage);

	editMessageSent(randomMessage,
		sizeof(randomMessage));

	printf("New message: %s \n\n", randomMessage);

}