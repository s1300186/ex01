#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int x,y;
  srand(time(NULL));

  x=rand()%6+1;
  y=rand()%6+1;
  printf("Rolling dice...\n");
  printf("Die 1: %d\n",x);
  printf("Die 2: %d\n",y);
  printf("Total value: %d\n",x+y);
  if(x+y>7) printf("You won\n");
  else printf("You lost\n");
  return 0;
}
