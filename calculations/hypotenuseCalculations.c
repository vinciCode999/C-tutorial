#include <stdio.h>
#include <math.h>


int main(){
  double sideA;
  double sideB;
  double sideC;
  double result;

  printf("Enter value of side A: ");
  scanf(" %lf", &sideA);

  printf("Enter value of side B: ");
  scanf(" %lf", &sideB);

  result = sqrt((sideA * sideA) + (sideB * sideB));

  printf("The hypoteneuse of your triange is %2.2lf", result);
  return 0;
}