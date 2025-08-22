#include <stdio.h>
#include <string.h>

struct Player{
  char name[22];
  int score;
};
int main(){

  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "John Doe");
  strcpy(player2.name, "Jane Doe");

  player1.score = 6;
  player2.score = 3;

  printf("\n Player1 name: %s", player1.name);
  printf("\n Player1 score: %d", player1.score);
  printf("\n Player2 name: %s", player2.name);
  printf("\n Player2 score: %d", player2.score);

  return 0;
}