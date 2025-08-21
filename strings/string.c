#include <stdio.h>
#include <string.h>


int main(){
  //array of string 2nd [] shows the max char for each string in array

  char cars[][10]={"Mustang","Corvette","Camaro"};

  //in sting's array we cannot automatically assign a value
  //e.g cars[0] = "Tesla" ???
  //use string methods instead

  strcpy(cars[0], "Tesla");

  for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
    printf("%s \n", cars[i]);
  }
  return 0;
}