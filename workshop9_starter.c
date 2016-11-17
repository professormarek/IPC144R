/*
this program desmontrates opening a file for reading
and opening a second file for writing
this program reads from the first file one character at a time
it writes to the output file one character at a time 
*/

#include <stdio.h>

int main(void){
	char c = 0;//this character will be used to store input from the file
	//declare file pointers - don't forget to initialize to NULL
	//file pointers are our exclusive way to deal with files
	FILE *inFile = NULL; //file for input
	//open the input file for reading
	inFile = fopen("note.txt", "r");
	//open the output file for writing

	//check to make sure the file(s) opened correctly
	if(inFile != NULL ) {
		//read the file one character at a time
		while(c != EOF){
			c = fgetc(inFile);
			printf("DEBUG: read character %c ASCII code: %d\n", c, c);
		}
		
	}else{
		printf("Could not open the file!!!\n");
	}
	return 0;
}
