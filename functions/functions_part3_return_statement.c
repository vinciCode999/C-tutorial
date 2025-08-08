#include <stdio.h>

double square(double x){
  return x * x;
}
int main(){
  //return statement - returns a value back to the calling function
  double x = 31.14;

  printf("%.2lf", square(x));
  return 0;
}