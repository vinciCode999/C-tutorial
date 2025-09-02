#include <stdio.h>


void printAge(int *pAge){
  printf("\nyou are %d years old\n", *pAge);
};
int main(){
  //pointer =  a "variable-like" reference that holds a memory address to another variable,
  //           a some tasks are performed more easily with pointers. 
  //           *= indirection operator (used to access the value at the address a pointer is pointing to)

  //variable has value and address
  int age = 21;

  int *pAge = NULL; // if not yet assigning a value to a pointer it is good practice to assign it to NULL
  
  pAge = &age; //& = address of operator (returns the memory address of a variable)
  
  // printf("\n%d", *pAge);//dereferencing finding value at a given memory address
  
  
  // printf("\nsize of age: %d", sizeof(age));
  // printf("\nsize of pinter age: %d", sizeof(*pAge));

  printf("%p", pAge);
  printAge(pAge);
}