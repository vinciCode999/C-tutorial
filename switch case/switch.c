#include <stdio.h>
#include <ctype.h>

int main(){
  // switch a more efficient alternative to using many "else if" statements allow 
  // a value to be tested for equality against multiple cases

  char grade;

  printf("Enter grade: ");
  scanf("%c", &grade);
  grade = toupper(grade);

  switch(grade){
    case 'A':
      printf("Perfect");
      break;
    case 'B':
      printf("you did good!\n");
      break;
    case 'C':
      printf("you did okay!\n");
      break;
    case 'D':
      printf("atleast it's not an F.\n");
      break;
    case 'F':
      printf("YOU FAILED! \n");
      break;
    
    default:
      printf("You entered an invalid grade");
  }
  return 0;
}