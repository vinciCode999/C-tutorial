#include <stdio.h>

int main(){
  //break = exit a loop or switch
  for(int i = 0; i<20; i++){
    if(i == 13){
      break;
    }
    printf("%d\n", i);
  }
  return 0;
}