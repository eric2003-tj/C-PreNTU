#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void){
  char zodiac[12][40];
  for(int i=0;i<12;i++){
    scanf("%s",zodiac[i]);
  }
  for(int i=0;i<11;i++){
    for(int j=i+1;j<12;j++){
        if(strcmp(zodiac[i],zodiac[j])>0){
            char temp[80];
            strcpy(temp,zodiac[i]);
            strcpy(zodiac[i],zodiac[j]);
            strcpy(zodiac[j],temp);
        }
    }
  }
  for(int i=0;i<12;i++){
    printf("%s\n",zodiac[i]);
  }
  return 0;
}
