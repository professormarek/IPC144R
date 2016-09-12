/*
this is a multi-line comment
comments are used to document programs
the multiline comments begins with slash-star
and end with star-slash

comments are ignored by the compiler

typically at the top of the program should go a description of what the program is for


The purpose of this prgram is to ask the user for two whole numbers
add the numbers up
and display the result to the user

*/


#include <stdio.h>

//this is a single line comment - begins with // and goes until the end of the line

//each c-program will have a main function
//execution starts with the first line of the main function
int main(void){

	//declare variables
	//first number
	int a;
	//second number
	int b;
	//store the sum
	int sum;

	//get the numbers from the user
	//ask the user to enter the first number
	printf("Enter the first number: ");
	//use scanf to copy the bytes the user entered into our variable
	scanf("%d", &a);
	//get the second number from the user
	printf("Enter the second number: ");
	scanf("%d", &b);

	//compute the sum, store the result in the "sum" variable
	sum = a + b;
	//display the result to the user
	printf("The result is: %d\n", sum);
	
	//end the program
	return 0;

}
