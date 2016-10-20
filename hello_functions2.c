/*
this program illustrates writing (creating) and using a simple function
in addition to main()
VERSION 2 - demonstrates a function that accepts one argument

*/

#include <stdio.h>

//declare additional functions BEFORE MAIN

/*
the welcome_message function accepts no arguments => void
and also returns no result =>void
all it will do is print a welcome message for the user
*/
void welcome_message(void){
	printf("\n\nwelcome to my program\n");
	printf("it doesn't do much yet\n");
	printf("stay tuned for more\n");
}

/*
this function prints out a goodbye message the indicated number of times
*/

void goodbye_message(int times){
	for( int i = 0; i < times; i++){
		printf("have a nice day!\n");		
	}

}


int main(void){
	//we can use or call our welcome_message function simply by writing its name
	//followed by ( ) braces. Because it accepts no arguments leave the braces empty
	welcome_message();

	//our program will eventually do some actual work
	
	//call the goodbye message function to display a goodbye message
	//the number of times to print the message is passed as an argument
	//between the () round braces
	goodbye_message(10);

	return 0;
}
