/*
this program demonstrates passing arrays to functions

*/
#include <stdio.h>

#define SIZE 3

/*
this fucntion demonstrates accepting an array as an argument
notice in the syntax, we don't put a value between the [] here
*/
void displayGrades(float g[]) {

	for(int i = 0; i < SIZE ; i++ ) {
		printf("grade %d: %.1f\n", i, g[i]);

	}

}

/*
a second function to determine whether arrays are passed by value or address?
let's try changing the values in the array...
the user will enter new grades for the array

NOTICE: arrays are always passed by address. 
In fact we can change the function header to use pointer notation!
Exercise at home -  change the function header to use a pointer - observe that no further changes are necessary
*/
void getGradesFromUser(float g[]){
	for(int i = 0 ; i < SIZE; i++){
		printf("enter the %d grade: ", i);
		scanf("%f", &g[i]);
	}

}


int main(void){
	float grades[SIZE] = {17.8, 20.5, 41.4};
	printf("displaying the grades:\n");
	displayGrades(grades);
	printf("let the user enter new grades\n");
	getGradesFromUser(grades);
	printf("See whether the grades have changed\n");
	displayGrades(grades);
	return 0;
}
