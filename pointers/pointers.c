#include <stdio.h>

/*
    Given a character pointer x (that points to an array of chars), and a
    character pointer y, copies the character contents of y over to x. Pointer
    arithmetic is necessary here. Also, make sure x points to a null terminator
    at its end to terminate it properly. 

    Example call:

    char buffer[1024];

    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/
void string_copy(char *x, char *y)
{
  int counter =0;
  while( *y != '\0'  )
  {
    x[counter] = *y;
    counter++;
      y++;

  }
}

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, int c)
{
  /* char target; */
  char *target;
  /* for(char i = *str; i != '\0'; *str++){ */
  /*   if(i == c) */
  /*   { */
  /*     target = i; */
  /*   } */
  /* } */
  while(*str != '\0')
  {
    /* check the value at address str */
    /* check it for the target value which passed in and represented by c */
    if(*str == c)
    {
      /* Here we take the target variable and set it to the address of the charachter we want*/
      target = str;
    }
  /* increment the address to the next value in the string */
  str++;
  }
  /* printf("with star returns a value: %c", *target); */
  /* printf("without star returns an address%s", target); */
  return target;
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`.

    Do not use the `strstr` function from the standard library.
*/
char *find_string(char *haystack, char *needle)
{

  char *target;

  while(*haystack != '\0')
  {
    if(*haystack == *needle)
    {
     target = haystack;
    }
    haystack++;

  }

  return target;

}

#ifndef TESTING
int main(void)
{
  /* printf("hello"); */

    char *hello = "Hello";
    char *world = "World";
    char *found_char = find_char(hello, 'e');
    char *found_string = find_string(world, "or");

    printf("Found char: %s\n", found_char);
    printf("Found string: %s\n", found_string);

    return 0;
}
#endif
