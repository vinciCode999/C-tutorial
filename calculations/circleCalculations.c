#include <stdio.h>

int main(){
  const double PI = 3.141592;
  double radius;
  double circumference;
  double area;

  printf("\nEnter radius of circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;
  printf("\nThe circumference of the circle is: %.4lf ", circumference);
  printf("\nThe area of the circle is: %.4lf ", area);

  return 0;
}