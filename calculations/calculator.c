#include <stdio.h>
#include <ctype.h>

int main(){
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter operator (+ - * /): ");
  scanf(" %c", &operator);

  printf("\nEnter num1: ");
  scanf("%lf", &num1);

  printf("\nEnter num2: ");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
      result = num1 + num2;
      printf("result : %.2lf", result);
      break;
    
    case '-':
      result = num1-num2;
      printf("result : %.2lf", result);
      break;
    
    case '/':
      result = num1/num2;
      printf("result : %.2lf", result);
      break;
    
    case '*':
      result = num1 * num2;
      printf("result : %.2lf", result);
      break;

    default:
      printf("Enter a valid operator!");
  }
  return 0;
}