#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void){
  FILE*fp;
  fp = fopen("file","w");
  assert(fp!=NULL);
  for(int i=0;i<10;i++){
    fputc('1',fp);
  }
  fclose(fp);
  fp = fopen("file","r+");
  assert(fp!=NULL);
  for(int j=0;j<5;j++){
    fputc('2',fp);
  }
  fclose(fp);
  int c;
  fp = fopen("file","r");
  assert(fp!=NULL);
  while((c=fgetc(fp))!=EOF){
    fputc(c,stdout);
  }
  fclose(fp);
}
