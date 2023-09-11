#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void) {

  string s = get_string("Enter String s: ");
  string t = get_string("Enter String t: ");

  // s and t will return the address of the first character in the string

  printf("Print Values\n");
  printf("%s\n", s);
  printf("%s\n", t);

  printf("Print Address\n");
  printf("%p\n", s);
  printf("%p\n", t);

  // if (s == t) {
  //   printf("Same\n");
  // } else {
  //   printf("Different\n");
  // }

  if (strcmp(s,t) == 0) {
    printf("Same\n");
  } else {
    printf("Different\n");
  }

}