#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses=0;
  int answer;

  //use the current time as a seed to generate random number
  srand(time(0));

  //generate random between min and max
  answer = (rand() % MAX)+ MIN;

  do{
    printf("\nEnter a guess: ");
    scanf(" %d", &guess);

    if(guess > answer){
      printf("Too high\n");
    }else if(guess < answer){
      printf("Too low\n");
    }else{
      printf("\nCORRECT!");
    }
    guesses++;
  }while(guess != answer);
  printf("\n***********************************");
  printf("\nanswer: %d", answer);
  printf("\nguesses: %d\n", guesses);
  printf("***********************************");
};