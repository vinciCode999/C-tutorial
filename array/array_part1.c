#include <stdio.h>

int main(){
  //array = a datastructure that can store many values of the same data type
  // a string is an array of individual characters
  // char name[] = "bless";
  // double prices[5];
  // prices[0] = 5;
  // prices [1] = 10;
  // prices[2] = 20;

  double prices[] = {5.0, 10.0, 15.0, 25.0, 20};


  printf("$%.1lf", prices);

  return 0;
}