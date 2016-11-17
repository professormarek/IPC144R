/*
this program desmontrates opening a file for reading
and opening a second file for writing
this program reads from the first file one character at a time
it writes to the output file one character at a time 
*/

#include <stdio.h>
//you may need to include ctype.h

int main(void){
	char c = 0;//this character will be used to store input from the file
	//declare file pointers - don't forget to initialize to NULL
	//file pointers are our exclusive way to deal with files
	FILE *inFile = NULL; //file for input
	//declare a file pointer for the output file
	FILE *outFile = NULL;
	//open the input file for reading
	inFile = fopen("note.txt", "r");
	//open the output file for writing
	outFile = fopen("updated.txt", "w");
	//check to make sure the file(s) opened correctly
	if(inFile != NULL && outFile != NULL) {
		//read the file one character at a time
		while(c != EOF){
			c = fgetc(inFile);
			printf("DEBUG: read character %c ASCII code: %d\n", c, c);
			if(c != EOF){
				//change the case of the character before writing				

				//write the character to the output file (fputc)
				fputc(c, outFile);
			)
		}
		
	}else{
		printf("Could not open the file(s)!!!\n");
	}

	//never forget to close the file when done!!!
	fclose(inFile);
	fclose(outFile);
	return 0;
}
