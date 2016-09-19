/*
this program provides the user with advice about what to do depending on
the outdoor temperature
V4 - give wayyyyy more elaborate advice
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
  }else if (temp < -30){
    printf("stay home\n");
  }else{
    //this will only be executed if all conditions above are FALSE
    printf("it's not too hot, and it's not too cold\n");
  }
  //this next statement is after the if-else and will be executed regarless of the condition
  printf("Enjoy life\n");
  return 0;
}
