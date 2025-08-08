#include <stdio.h>
#include <string.h>
int main(){
  char string1[] = "Lucy";
  char string2[] = "Her";

  // strupr(string1);  //converts a string to lowercase
  //strlwr(string2);  //converts a string to uppercase
  // strcat(string1, string2); //append string2 to end of string1
  //strncat(string1, string2, 1); //appends n character from string2 to string1
  //strcpy(string1, string2); //copy string2 to string1
  // strncpy(string1, string2, 1); //copy n characters of string2 to string1


  // strset(string1, 'x'); //sets all characters of a string to a given character
  // strnset(string1, 'x', 2); //set first n characters of a string to a given character
  //strrev(string1); //reverses a string


  int result = strlen(string1); //returns string length as int
  // int result = strcmp(string1, string2); //compare all characters
  // int result = strncmp(string1, string2, 1); //compare n characters
  // int result = strcmpi(string1, string2); //compare all (ignore case)
  // int result = strnicmp(string1, string2, 2); //compare n characters (ignore characters)

  printf("%d", result);
  

  return 0;
}