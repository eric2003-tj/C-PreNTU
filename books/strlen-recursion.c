#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int mystrlen(char*string){
  if(*string == '\0'){
    return 0;
  }
  return mystrlen((string+1))+1;

}
#define STRINGLEN 128
int main(void)
{
  char string[STRINGLEN];
  scanf("%s", string);
  printf("myStrlen(string) = %d\n",
	 mystrlen(string));
  return 0;
}
