/*
this program illustrates writing (creating) and using a simple function
in addition to main()
VERSION 3 - demonstrates function that accept arguemtns and compute a value

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

/*
Power function - implements the math function power
it accepts a base and exponent as whole numbers
it computes the result of base raised to the power of exponent

the return type is int because it computes an integer result
notice the arguments are separated by commas here
*/
int power(int base, int exponent) {
	int result = 1;

	//use a loop to compute the result
	for(int i = 0; i < exponent; i++){
		result = result * base;
		printf("***DEBUG: base %d exponent %d result %d i %d\n", base, exponent, 
			result, i); 

	}
	
	//because the return type of the power function is not void
	//we need a return statement with the correct type
	return result;
}


int main(void){
	//we can use or call our welcome_message function simply by writing its name
	//followed by ( ) braces. Because it accepts no arguments leave the braces empty
	welcome_message();

	/*
	our program will eventually do some actual work
	use a function compute the result of a number raised to the power of another 
	number
	*/
	int answer1 = power(4, 4);	
	//display the result
	printf("4 raised to the power of 4 is %d\n", answer1);
	//compute to raised to the power of 3 and display the result
	int answer2 = power(2,3); 
	printf("2 raised to the power of 3 is %d\n", answer2);
	
	//call the goodbye message function to display a goodbye message
	//the number of times to print the message is passed as an argument
	//between the () round braces
	goodbye_message(10);

	return 0;
}
