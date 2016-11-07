/*
this program ATTEMPTS to create a function that accepts a varaible and 
sets the value of the variable to 0
it FAILS to do so in order to illustrate a point
*/
#include <stdio.h>

//declare zero function
void zero(int number){
	//try to use = assignment to change the value of number
	number = 0;
	printf("the address of number in zero function is: %p\n", &number);

}

int main(void){
	int x = 5;
	printf("the value of x before calling zero(x) is: %d\n", x);
	printf("the address of x in main is: %p\n", &x);
	zero(x); //notice no = assignment operator
	printf("the value of x after calling zero(x) is: %d\n", x); //we want the output to be 0
	printf("the address of x in main is: %p\n", &x);
	return 0;
}
