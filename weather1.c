/*
this program provides the user with advice about what to do depending on
the outdoor temperature
*/

#include <stdio.h>
int main(void){
  
  //declare variables
  //even though temperature is a measure value (real number) it's more convenient 
  //for humans to discuss outdoor temperature using whole numbers
  int temp;

  //get the outdoor temperature from the user
  printf("Enter the outdoor temperature (celsius) as a whole number :");
  scanf("%d", &temp);
  //make a decision depending on the temperature
  if(temp > 30){
    //tell the user to wear sunscreen if the temperature is more than 30 degrees
    printf("wear sunscreen\n");
    printf("enjoy outdoors\n");
  }
  return 0;
}
