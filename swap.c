#include <stdio.h>

void swap (int a, int b);
void swap2 (int *a, int *b);

int main (void) {

  int x = 10;
  int y = 20;

  printf("Before swapping\n");
  printf("x = %d, y = %d\n", x, y);

  // Version1
  swap (x, y);
  printf("After swapping Version 1\n");
  printf("x = %d, y = %d\n", x, y);
  // Will not working because it swaps the value of a and b in parameters not value of x and y
  // Solution => Make a and b as the pointers to point to values of x and y instead

  // Version2
  swap2 (&x, &y);
  printf("After swapping Version 2\n");
  printf("x = %d, y = %d\n", x, y);

}

// Version 1
void swap (int a, int b) {
  
  int tmp = a;
  a = b;
  b = tmp;

}

// Version 2
// Using Pointer instead initalizes new variables with new memory allocation
// Referring by Address 
void swap2 (int *a, int *b) {

  int tmp = *a;
  *a = *b;
  *b = tmp;

}
