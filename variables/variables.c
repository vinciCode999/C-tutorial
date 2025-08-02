#include <stdio.h>

int main(){
  /*
    Variable = Allocated space in memory to store a value.
    we refer to the variable's name to access the stored value.
    That variable now behaves as if it was the value it contains
  */

  int x; //declaration 
  x = 45; //initialization

  int age = 45; //integer
  float gpa = 4.5; //floating point number
  char grade = 'A'; //single char use single quotes
  char name[] = "John";//series of char i.e. array, emulating a string

  printf("Hello %s.\n", name);
  printf("you are %d years old.\n", age);
  printf("your average grade is %c.\n", grade);
  printf("your gpa is %.1f\n", gpa);
  return 0;
}