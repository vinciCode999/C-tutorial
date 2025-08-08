#include <stdio.h>
#include <ctype.h>

int main(){
  char unit;
  float temperature;

  printf("is the temperature in (C) or (F)?: ");
  scanf(" %c", &unit);
  unit = toupper(unit);

  if(unit=='C'){
    printf("\nEnter the temperature in celcius: ");
    scanf(" %f", &temperature);
    temperature = (temperature * 9/5) + 32;

    printf("The converted temperature in Farenheit is %.2f", temperature);
  }else if(unit=='F'){
    printf("\nEnter the temperature in Fareheit: ");
    scanf(" %f", &temperature);
    temperature = ((temperature - 32)*5)/9;

    printf("The converted temperature in Celcius is %.2f", temperature);
  }else{
    printf("Oops,Sorry %c is not valid. the program only accepts two units F or C!", unit);
  }

  return 0;
}