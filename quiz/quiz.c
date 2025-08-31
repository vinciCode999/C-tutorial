#include <stdio.h>
#include <ctype.h>



int main() {

  char questions[][100]={"1. What year did the C language debut?: ",
                          "2. Who is credited with creating C?: ",
                          "3. What is the predecessor of C?: "
                        };
  char options[][100]={"A.1969", "B.1972 ", "C.1975", "D.1999",
                        "A. Denis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                        "A. Objective C", "B. B", "C. C++", "D. C#"
                      };
  char answers[3] = {'B','A','B'};

  char guess;
  int score;
  const int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

  for(int i=0; i < numberOfQuestions; i++){
    printf("\n%s", questions[i]);

    for(int j=0; j<4; j++){
      printf("\n%s", options[4*i + j]);
    }
    printf("\nYour answer: ");
    scanf(" %c", &guess);

    guess = toupper(guess);

    if(guess == answers[i]){
      printf("Correct!\n");
      score++;
    } else {
      printf("Wrong! The correct answer is %c\n", answers[i]);
    }
  }

  printf("\n************************************\n");
  printf("FINAL SCORE:(%d/%d).\n", score, numberOfQuestions);
  printf("************************************\n");


  return 0;

}