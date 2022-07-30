#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void){
  char sources[80];
  char destinations[80];
  scanf("%s%s",sources,destinations);
  printf("%s\n",destinations);
  strcpy(destinations,sources);
  printf("%s\n",destinations);
  return 0;
}
