#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int num1,num2,total=0;

  srand(time(NULL));
  num1 = rand() % 6 + 1;
  num2 = rand() % 6 + 1;
  total=num1+num2;

  printf("Rolling the dice...\n\
    Die 1: %d\n\
    Die 2: %d\n\
    Total value: %d \n", num1,num2,total);

  return 0;
}
