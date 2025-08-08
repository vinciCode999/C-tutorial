#include <stdio.h>
#include <string.h>

int main(){
  //nested loop 
  int row;
  int col;
  char symbol;
  
  printf("\nEnter # row: ");
  scanf("%d", &row);

  printf("\nEnter # col: ");
  scanf("%d", &col);

  printf("\nEnter symbol: ");
  scanf(" %c", &symbol);

  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
      printf("%c", symbol);
    }
    printf("\n");
  }
  
  return 0;
}