
/*
get student id's and grades from the user and store them in an array of struct Student
then when the user is finished entering student data
display the data in the same order that the user entered them
*/

#include <stdio.h>

//this defines a constant that will be replaced by the "pre-compiler" before the program is compiled
//i.e. "find and replace"
#define NUM_STUDENTS 4

/*
before main, define or declare any structs you want to use
structs are programmer defined data types that represent complex real-world entities
structs are typically made up of several primitive data types
*/
//tell the compiler what pieces of data make up a student
struct Student{
	//declare the fields (members) - the pieces of infomation that make up our type
	float grade;
	long student_id;
};

//inside the main function, we're actually going to create variables of our new Student type
int main(void){
        //declare an array of our Student type to store student id's and grades for each student
	struct Student students[NUM_STUDENTS]; //enough space for the indicated number of students 
        int counter = 0;


        while (counter < NUM_STUDENTS){
		//get the student id from the user
		printf("enter student id for student %d:", counter);
		scanf("%ld", &students[counter].student_id);
                //get the grade from the user
                printf("currently entering grade %d: please enter grade:", counter);
                scanf("%f", &students[counter].grade);
                counter = counter + 1; //counter++
        }

        //display the grades in the same order that they were entered

        counter = 0;
        while(counter < NUM_STUDENTS){
                //display the grade at the current index
                printf("Student id: %ld is %.1f\n", students[counter].student_id, students[counter].grade);
                counter++;
        }
        return 0 ;
}


