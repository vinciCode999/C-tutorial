#include <stdio.h>

int main(){
  FILE *pF = fopen("c:\\users\\vinci\\desktop\\poem.txt","r");
  char buffer[255];
  fgets(buffer, 255, pF);

  while(fgets(buffer,255,pF) != NULL){
    printf("%s", buffer);
  }
  fclose(pF);

}