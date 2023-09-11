#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void) {

  string s = get_string("Enter String s: ");
  string t = get_string("Enter String t: ");

  // s and t will return the address of the first character in the string

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