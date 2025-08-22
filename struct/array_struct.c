#include <stdio.h>
#include <string.h>

struct Student{char name[25]; float GPA;};

int main(){
  struct Student firstStudent = {"Michele", 4.0};
  struct Student secondStudent = {"Nafe", 4.0};
  struct Student thirdStudent = {"Naomi", 3.0};
  struct Student fourthStudent = {"Reshma", 3.0};

  struct Student students[] = {firstStudent,secondStudent,thirdStudent, fourthStudent};

  for(int i = 0;i<sizeof(students)/sizeof(students[0]);i++){
    printf("\n");
    printf(students[i].name);
    printf(": %.2f",students[i].GPA);
  }
  return 0;
}