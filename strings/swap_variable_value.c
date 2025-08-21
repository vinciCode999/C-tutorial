#include <stdio.h>
#include <string.h>


int main(){
  //swap variable's values
  // char x = 'X';
  // char y = 'Y';

  // char temp;

  // temp = x;
  // x = y;
  // y = temp;

  // printf("X = %c\n", x);
  // printf("Y = %c\n", y);

  //swapping strings

  char name1[] = "name1";
  char name2[] = "name2";
  char temp[10];

  strcpy(temp, name1);
  strcpy(name1, name2);
  strcpy(name2, temp);

  printf("name1 = %s\n", name1);
  printf("name2 = %s\n", name2);

  return 0;
}