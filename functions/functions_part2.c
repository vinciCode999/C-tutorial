#include <stdio.h>


void happybirthday(char name[], int age){
  printf("\nHappy birthday %s", name);
  printf("\nYou are %d years old!", age);
}
int main(){

  char name[] = "John";
  int age = 20;

  happybirthday(name, age);
  return 0;
}