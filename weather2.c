/*
this program provides the user with advice about what to do depending on
the outdoor temperature
V2 - give advice if the temperature is not > 30
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
  }else{
    printf("It's not that hot out!\n");
  }
  //this next statement is after the if-else and will be executed regarless of the condition
  printf("Enjoy life\n");
  return 0;
}
