#include <stdio.h>

int main() {
  //memory = an array of bytes within RAM(street)
  //memory block = a single unit(byte) within memory, used to hold some value(person)
  //memory address = the address of where a memory block is located (house address)
  
  char a = 'X';
  char b = 'Y';
  char c = 'Z';

  //bytes
  printf("Size of a: %zu bytes\n", sizeof(a));
  printf("Size of b: %zu bytes\n", sizeof(b));
  printf("Size of c: %zu bytes\n", sizeof(c));

  printf("Memory address of a: %p\n", (void*)&a);
  printf("Memory address of b: %p\n", (void*)&b);
  printf("Memory address of c: %p\n", (void*)&c);
  return 0;
}