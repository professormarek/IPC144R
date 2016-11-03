/*
this program demonstrates a function that accepts the address of a variable as an 
argument. This function will change the original value of the variable whose address is 
passed.

The main() function will demonstrate the functionality of the function
*/

#include <stdio.h>

/*
change this function to accept the ADDRESS of an integer
*/
void zero(int x){
	//dereference the pointer to assign a value to it
	x = 0;
}


int main(void){
	//declare an initialize (ex. 5) an integer variable
	int x = 5;
	//display the value of x
	printf("value of x is: %d \n",x); 
	//display the address of x
	printf("the address of x is: %p\n", &x);

	//GOAL: call the function to set the value of x to 0
	//pass the address of x, not the value
	zero(x);

	//display the value of x and the address of x
	//has the value changed? has the address changed?
	printf("AFTER THE FUNCITON CALL value of x is: %d \n",x);
        printf("AFTER THE FUNCTION CALL the address of x is: %p\n", &x);

	return 0;
}
