#include <stdio.h>

//are constants, and each of the constants have associated integer
//enums are not string, when printing treat them as integer "%d"
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
int main(){
  //enum = a user defined type of named integer identifier
  //  helps to make a program more readable

  //enum makes code to be readable
  enum Day today = Sun;
  if(today == Sun || today== Sat){
    printf("It's the weekend! party time!");
  }else{
    printf("I have to work today :(");
  }

}