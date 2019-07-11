#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  char s[30];
  printf("What is your name?\n> ");
  scanf("%s",s);
  printf("Hello, %s!\n",s);

  int num1,num2,num3,total=0;

  srand(time(NULL));
  num1 = rand() % 6 + 1;
  num2 = rand() % 6 + 1;
  num3 = rand() % 6 + 1;
  total=num1+num2;

  printf("Rolling the dice...\n\
    Die 1: %d\n\
    Die 2: %d\n\
    Die 3: %d\n\
    Total value: %d \n", num1,num2,total);

  if(total>7) printf("%s win!\n",s);
  else printf("%s lose!\n",s);

  return 0;
}
