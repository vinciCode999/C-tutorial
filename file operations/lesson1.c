#include <stdio.h>


int main(){
  //MODE: w, a, r
  FILE *pF = fopen("C:\\Users\\your_user_name\\Desktop\\new.txt", "w");
  
  fprintf(pF, "Spongebob squarePants");
  fclose(pF);

  //delete a file

  // if(remove("tempCodeRunnerFile.c")==0){
  //   printf("\nThat file was deleted successfully.");
  // }else{
  //   printf("\nThat file was not deleted.");
  // }
  return 0;
}