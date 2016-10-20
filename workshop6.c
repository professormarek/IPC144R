#include <stdio.h>

#include "ipc144math.h"

/*
write additional functions here
*/
void welcome_message(void){
	printf("calculate stuff\n");
	printf("===============\n");
}

int validInput(int min, int max){
	int response = 0;
	printf("Enter an integer (%d to %d): ", min, max);
	scanf("%d", &response);
	while(response < min || response > max){
		printf("ERROR! Enter an integer (%d to %d): ", min, max);
		scanf("%d", &response);
	}
	return response;
}

//main function
int main(void){
	//display welcome message by calling the welcome_message()
	welcome_message();
	int input = -1;
	//within a loop
	while( input != 0){
		//display the menu
		printf("enter 0 1 or 2\n");
		//use the validInput function to get the user's response
		input = validInput(0, 2);
		if(input == 1){	
			//compute power
			//reuse validInput to get base an exponent
		}else if(input == 2){
			//compute factorial
			//reuse validInput to get the number
		} 
	}
	return 0;
}
