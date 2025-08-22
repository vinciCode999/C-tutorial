#include <stdio.h>
#include <string.h>


//typedef char user[25];

typedef struct{
  char name[25];
  char password[12];
  int id;
} User;
int main(){
  //typedef = the reserved keyword that gives an existing datatype a "nickname"
  //user user1 = "brocode";
  // printf("%s", user1);

  User user1 = {"Havard", "12345", 34556};
  User user2 = {"MIT", "67545", 14244};

  printf("%s\n", user1.name);
  printf("%s\n", user1.password);
  printf("%d\n", user1.id);

  printf("\n");
  printf("%s\n", user2.name);
  printf("%s\n", user2.password);
  printf("%d\n", user2.id);

  return 0;
}