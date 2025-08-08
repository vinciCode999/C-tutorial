#include <stdio.h>
#include <stdbool.h>

int main(){
  //logical operators(&&, ||, !)
  //&&(AND) checks if 2 or more conditions are true

  // float temp = 25;
  // bool sunny = true;

  // if(temp >= 0 && temp <= 30 && sunny){
  //   printf("\nThe weather is good");
  // } else{
  //   printf("\nThe weather is bad");
  // }

  //logical operators( OR ) checks if atleast one condition is true
  // float temp = 100;
  // bool sunny = true;

  // if(temp >= 0 || temp >= 30){
  //   printf("\nThe weather is good");
  // } else{
  //   printf("\nThe weather is bad");
  // }

  //! (NOT) reverses the state of a condition
  bool sunny = true;

  if(!sunny){
    printf("It's sunny outside");
  } else{
    printf("it's not sunny outside");
  }



  return 0;
}