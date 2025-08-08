#include <stdio.h>


int findMax(int num1, int num2){
  return num1 > num2 ? num1 : num2;
}
int main(){
  //ternary operator is shortcut for if else statement
  int max = findMax(10, 2);

  printf("%d", max);

  return 0;
}