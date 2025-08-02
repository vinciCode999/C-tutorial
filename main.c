#include <stdio.h>
#include <math.h>

int main(){

  double opposite;
  double adjacent;
  double hypotenuse;

  printf("\nEnter value of opposite side's value of triangle: ");
  scanf("%lf", &opposite);

  printf("\nEnter adjacent side's value of triangle: ", adjacent);
  scanf("%lf", &adjacent);

  // hypotenuse = sqrt(pow(opposite, 2)+pow(adjacent, 2));
  hypotenuse = sqrt(opposite*opposite + adjacent*adjacent);
  printf("\nThe hypotenuse of the triangle is %lf", hypotenuse);

  return 0;
}