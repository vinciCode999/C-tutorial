#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //pseudorandom numbers = a set of values or elements that are statically random
  //                       !don't use these for any sort of cryptographic secuity)

  srand(time(0)); //this brings a feel of randomness
  //rand() //values btwn 0-32,767

  //generate random number between 1 - 6
  //rolling 3 dices
  int number1 = (rand()% 6) + 1;
  int number2 = (rand()% 6) + 1;
  int number3 = (rand()% 6) + 1;

  printf("%d", number1);
  printf("%d", number2);
  printf("%d", number3);

}