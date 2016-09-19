/*
this program demonstrates counting from 1 to 10 using a while loop
*/

#include <stdio.h>

int main(void){
  //create a variable to keep track of the current number - start counting at 1
  int count = 1;  
  while(count <= 10){
    printf("counting: %d\n", count);
    count = count + 1;
    /* 
    alternative shorthands for "count = count + 1":
    count += 1;
    count++;
    */     
  }
  //the next statement is not repeated because it's outside the while( ) { }
  printf("counting finished. Goodbye!\n");
  return 0;
}
