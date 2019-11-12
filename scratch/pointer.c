
#include <stdio.h>
#include <stdlib.h>


char string[] = "hello world";
char buffer[512];


void string_copy(char *x, char *y)
{
  int counter = 0;
  while( *x != '\0' ) 
  {
   y[counter] = *x;
   counter++;
  /* printf("x string => %c\n", *x); */
   x++;
  }
   /* printf("x string => %c\n", *(x + 11)); */
  /* printf("x string => %c\n", *x); */
  printf("y string => %c\n", *y);
  /* printf("y string => %c\n", *(y + 1)); */
  printf(" this is the buffer => %s", y);
}

char *find_char(char *str, int c)
{
 char target;
 for(char i = *str; i != '\0'; i++)
 {
   if(i == c)
   {
     target = i;
   }
   printf("%c", i);
 }
 return target;
}

int main(void) {
  /* string_copy("hello world", buffer); */
   char result = *find_char("hello", 'e');


  /* char *a = *find_char("hello", 'e'); */

  /* printf("Return of the function => %c", *a); */



}
