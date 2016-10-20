
#include <stdio.h>

int main(void){
        //declare variables to store grades
        float grade[3];

        int counter = 0;
	printf("DEBUG: BEFORE LOOP\n");
        while (counter < 3){
                printf("please enter grade:");
                scanf("%f", &grade[counter]);
		printf("DEBUG: counter: %d grade[]: %f\n", counter, grade[counter]); 
		counter++;
        }
	printf("DEBUG: AFTER LOOP\n");
        counter = 0;
        while(counter < 6){
                printf("Grade %d is %f\n", counter, grade[counter]);
                counter++;
        }
        return 0 ;
}


