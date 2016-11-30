/**
this program demonstrates accessing command line arguments
(note they are represented as an array of strings - a 2 dimensional array)
note, on a unix system the operating system splits your command line arguments
using whitespace

it passes these arguments to main using a 2d array
don't worry 2d arrays and command line arguments are not on the final exam
this is for fun and because it is cool
**/

#include <stdio.h>
#include <string.h>
/*
argc is the count of command line arguments
argv is the array of strings that holds the arguments
recall the syntax equivalence between * and []
*/
int main(int argc, char *argv[]){
	int reverse = 0;//false	

	//let's verify the number of command line arguments passed
	fprintf(stderr,"DEBUG: the number of command line arguments is: %d\n", argc);

	//print the command line arguments
	for(int i=0; i < argc; i++){
		fprintf(stderr,"DEBUG: Argument %d is %s\n", i, argv[i]);
	}
	/*examine the command line arguments to decide whether to translate
	FROM english TO hackerspeak
	OR FROM hackerpeak TO english
	*/
	for(int i=0; i < argc; i++){
		//check to see if one of the arguments matches our pattern
		if(strcmp(argv[i], "-toenglish") == 0 ){
			fprintf(stderr, "DEBUG: the user chose to translate back to english\n");
			reverse = 1;
		}
	}
	char stdin_char = getchar();
	while(stdin_char != EOF){
		if(reverse){
			//translate back to english
			if(stdin_char == '3'){
                        	stdin_char = 'e';
                	}
		}else{
			if(stdin_char == 'e' || stdin_char == 'E'){
				stdin_char = '3';
			}
		}
		putchar(stdin_char);
		stdin_char = getchar();
	}	


	return 0;
}

