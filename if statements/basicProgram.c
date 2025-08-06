#include <stdio.h>

int main(){
  int age;

  printf("Enter your age: ");
  scanf(" %d", &age);

  if(age >= 18) {
    printf("you are now signed up!");
  } else if (age == 0){
    printf("you can't sign up! you were just born.");
  }
  else if(age < 0){
    printf("you haven't been born yet.");
  }
  else {
    printf("you are too young to sign up!");
  }
  return 0;
}