#include <stdio.h>
#include <string.h>

int main(){
  //while loop = repeats a section of code possibly unlimited
  //while some conditions remain true
  //a while loop might not execute at all

  char name[25];
  printf("\nEnter name: ");
  fgets(name, 25, stdin);
  name[strlen(name)-1]  = '\0';
  while(strlen(name)==0){
    printf("You did not enter a name!");
    printf("\nEnter name: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1]  = '\0';
  }

  printf("Hello %s ", name);

  return 0;
}