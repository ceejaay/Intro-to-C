#include <stdio.h>
#include <stdlib.h>
/* #include "lib.h" */


typedef struct Stack {
  int *storage;
  int length;
  int capacity;
} Stack;

Stack *createStack(int capacity)
{
  Stack *newStack = malloc(sizeof(Stack));
  newStack->storage = malloc(capacity * sizeof(int));
  newStack->length = 10;
  newStack->capacity = capacity;
  return newStack;

}

typedef struct Person {
  char *name;
  int age;
  int height;
  int weight;
} Person;

Person *createPerson(char *name, int age, int height, int weight)
{
  Person *newPerson = malloc(sizeof(Person));
  newPerson->name = name;
  newPerson->age = age;
  newPerson->height = height;
  newPerson->weight = weight;
  return newPerson;
}

void destroyPerson(Person *who)
{
  free(who);
}


int main(void) 
{
  Person *tony = createPerson("Tony Stark", 32, 64, 140);
  printf("Name: %s\n", tony->name);
  printf("age: %d\n", tony->age);
  printf("height: %d\n", tony->height);

  Stack thing = *createStack(10);

  printf(" capacity %d\n", thing.capacity);
  printf(" length %d\n", thing.length);

  return 0;
}





