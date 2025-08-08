#include <stdio.h>
void hello(char[], int); //function prototype
int main(){
  //function prototype
  //WHAT IS IT?
  //function declaration, w/o body, before main()
  //Ensures calls to a function are made with correct arguments

  char name[] = "Einsteine";
  int age = 21;

  hello(name, age);

  return 0;
}


void hello(char name[], int age){
  printf("\nHello %s", name);
  printf("\nYou are %d years old.", age);
}