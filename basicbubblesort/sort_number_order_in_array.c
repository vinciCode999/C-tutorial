#include <stdio.h>

//Bubble sort basic
void sort(int array[], int size){
  for(int i = 0; i<size - 1; i++){
    for(int j=0;j<size - i -1;j++){
      if(array[j] > array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

void displayArray(int array[], int size){
  for(int i = 0; i<size; i++){
    printf("%d, ", array[i]);
  }
}

int main(){
  int array[] = {9,4,2,8,14,7,3,5,1,6,11};
  int size = sizeof(array)/sizeof(array[0]);

  sort(array, size);
  displayArray(array, size);
  return 0;
}