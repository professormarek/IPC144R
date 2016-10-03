
/*
get student id's and grades from the user and store them in parallel arrays
then when the user is finished entering student data
display the data in the same order that the user entered them
*/

#include <stdio.h>

//this defines a constant that will be replaced by the "pre-compiler" before the program is compiled
//i.e. "find and replace"
#define NUM_STUDENTS 4


int main(void){
        //declare parallel arrays to store student id's and grades for each student
	long student_id[NUM_STUDENTS];
        float grade[NUM_STUDENTS];
        int counter = 0;


        while (counter < NUM_STUDENTS){
		//get the student id from the user
		printf("enter student id for student %d:", counter);
		scanf("%ld", &student_id[counter]);
                //get the grade from the user
                printf("currently entering grade %d: please enter grade:", counter);
                scanf("%f", &grade[counter]);
                counter = counter + 1; //counter++
        }

        //display the grades in the same order that they were entered

        counter = 0;
        while(counter < NUM_STUDENTS){
                //display the grade at the current index
                printf("Student id: %ld is %.1f\n", student_id[counter], grade[counter]);
                counter++;
        }
        return 0 ;
}


