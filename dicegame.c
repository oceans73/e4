#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  char s[30];

  int num1,num2,total=0;

  srand(time(NULL));
  num1 = rand() % 6 + 1;
  num2 = rand() % 6 + 1;
  total=num1+num2;

  printf("Rolling the dice...\n\
    Die 1: %d\n\
    Die 2: %d\n\
    Total value: %d \n", num1,num2,total);

  if(total>7) printf("You win!\n");
  else printf("You lose!\n");

  return 0;
}
