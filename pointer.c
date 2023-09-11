#include <stdio.h>

int main (void) {

  int numbers[] = {2,5,1,6,7,3,8,9};

  // Pointer arithmetic

  printf ("Number: %i\n", *numbers);
  printf ("Number: %i\n", *(numbers + 1));
  printf ("Number: %i\n", *(numbers + 2));
  printf ("Number: %i\n", *(numbers + 3));
  printf ("Number: %i\n", *(numbers + 4));
  printf ("Number: %i\n", *(numbers + 5));
  printf ("Number: %i\n", *(numbers + 6));
}