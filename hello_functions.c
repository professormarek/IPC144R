/*
this program illustrates writing (creating) and using a simple function
in addition to main()
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


int main(void){

	printf("this is the first line of main\n");
	//we can use or call our welcome_message function simply by writing its name
	//followed by ( ) braces. Because it accepts no arguments leave the braces empty
	welcome_message();

	printf("program complete\n");

	return 0;
}
