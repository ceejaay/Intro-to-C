#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s (as a pointer), return the number of 
    characters in the string.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char *s)
{
  int num_of_chars = 0;
  int length = 0;
  while(s[length] != '\0')
  {
    num_of_chars++;
    length++;
  }

  return num_of_chars;

}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char *rv, char *s)
{

  /* int number_chars = 0; */
  int length = 0;
  int rv_length = 0;

  while(s[length] != '\0')
  {
    length++;
  }

  printf("This should be a null character => %i\n", s[27] == '\0' );
  printf("Length: %d\n", length);

  /* start at minus one because the last char is the null char */
  for(int i = length - 1; i >= 0; i--)
  {
    printf("i value: %d         ", i);
    rv[rv_length] = s[i];
    printf("Null op? %i        ", s[i] == '\0');
    printf("rv  value: %d         ", rv_length);
    printf("Null op in rv? %i\n", rv[rv_length] == '\0');
    rv_length++;
  }

  printf("length after the process %i\n", length);
  printf("char at 27 %c\n", rv[length] == '\0');
  /* don't need a null operator because one is already getting put in */

  /* rv[length + 1] = '\0'; */
  return rv;


}


#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
