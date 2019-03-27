
#include <stdio.h>
#include <stdlib.h>


char *reverse_string(char *rv, char *s)
{
  int length = 0;
  int rv_length = 0;
  while(s[length] != '\0')
  {
    length++;
  }
  /* length = length - 1; */

  for( int i = length - 1; i >= 0; i -- )
  {
   /* printf("Rv length: %d       ", rv_length); */
   /* printf("length: %d\n", i); */
   rv[rv_length] = s[i];
   rv_length ++;
    /* printf("length: %d\n", i); */
    /* printf("rv length: %d\n", rv_length); */
    /* rv_length ++; */
    /* rv[rv_length] = 'a'; */
    /* printf("rv array %s\n", rv); */
    /* printf("this is the rv array: %s\n", rv); */
    /* rv_length++; */

  }

  rv[length + 1] = '\0';

  /* length = length + 1; */

  /* rv[length] = '\0'; */


  return rv;
}

char string_copy(char *x, char *y)
{
  int length = 0;
   printf("%c", x);
  /* while(x != '\0') */
  /* { */
  /*   printf("%s", x); */
  /* } */

  /* y[length + 1] = '\0'; */

  return y;



}

int main(void) {
  /* int integers[] = {9, 10, 1, 54, 14, 19}; */
  /* printf("size of integer array: %d", sizeof(integers)); */
  /* int *point_to_integers = integers; */
  /* printf("%d\n", &point_to_integers); */
  /* printf("integers: %d", integers); */
  char quote[] = "I know that, Betty!";
  char new_quote[512];
  string_copy(quote, new_quote);

  printf("New string: %s     ", new_quote);
  printf("Old string: %s     ", quote);

  /* printf("size of integer array: %d", sizeof(integers)); */
  /* char words[512]; */
  /* words[0] = 'h'; */
  /* words[1] = 'i'; */
  /* words[2] = '\0'; */

  /* printf("%s", words); */


  /* printf("I know that, Betty! reversed is: '%s'\n", reverse_string(words, quote)); */


}
