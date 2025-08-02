#include <stdio.h>
#include <string.h> //Required for strlen()

int main(){
  //accept user input
  int age;
  char name[20]; //max size of this array 20 bytes beyond that it will cause a buffer overflow

  printf("Enter your name: ");
  // scanf("%s", &name); //scanf reads up to any white spaces
  fgets(name, 20, stdin); //fgets accepts whitespaces e.g. (firstname lastname)
  name[strlen(name)-1] = '\0'; //replace \n with \0 : removes whitespace.


  printf("enter your age: ");
  scanf("%d", &age);


  printf("\nHey %s!", name);
  printf("\nYou are %d years old.", age);
  return 0;
}