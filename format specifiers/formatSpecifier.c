#include <stdio.h>
#include <stdbool.h>


int main(){
  //format specifier % = defines and formats a type of data to be displayed
  
  //%c = character
  //%s = string
  //%f = float
  //%d = integer (decimal)
  //%lf = double 

  //%.1 = decimal precision
  //%1 = minimum field width (spaces to align things up)
  //%- = left align

  float item1 = 35.50;
  float item2 = 45.00;
  float item3 = 99.99;

  printf("$%.2f, $%.2f, $%.2f\n", item1, item2, item3);
  printf("$%.2f\n", item1);
  printf("$%.2f\n", item2);
  return 0;
}