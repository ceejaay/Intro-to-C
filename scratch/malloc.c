#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* #include "lib.h" */


int string_length(char *s)
{
    return strlen(s);

}


char *string_dup(char *src) 
{
  /* printf("length of string => %d       ", string_length(src)); */
  int length = string_length(src);
  char *c = malloc(length * sizeof(char));
  /* printf("c address %s ", c); */
  for(int i = 0; i < length; i++ )
  {
    if(src[i] == '\0'){
      printf("found a null\n");
    }
    c[i] = src[i];

  }

return c;
}

int main(void) {

  char *thing = string_dup("hello world");
  printf("copied string => %s", thing);
 




  return 0;
}
