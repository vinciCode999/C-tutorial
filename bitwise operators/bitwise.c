#include <stdio.h>
#include <ctype.h>

int main() {

  //BITWISE OPERATORS = special operators used bit in level programming 
  //                    (knowing binary is important for this topic)

  //& = AND
  //| = OR
  //^ = XOR
  //~ = NOT
  //<< = left shift
  //>> = right shift

  int x = 6;  // 00000110
  int y = 12; // 00001100
  int z = 0; //  00001010

  z = x & y;
  printf("AND = %d\n", z);


  z = x | y;
  printf("OR = %d\n", z);

  
  z = x ^ y;
  printf("XOR = %d", z);

  z = x << 1; //formula 6*2(n=number of shift in ourcase 1), 6 based on our example
  printf("\nleft bitwise: %d\n", z);

  z = x >> 1; //formula 6/2(n=number of shift in ourcase 1), 6 based on our example
  printf("right bitwise: %d\n", z);

  // Operation	Binary Effect	                  Math Effect
  // X << N	    Shift bits left, fill 0	        X * 2^N
  // X >> N	    Shift bits right, drop bits	    X / 2^N (int)
  return 0;
}