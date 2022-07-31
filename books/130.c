#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void test(char*s1,char*s2);
int main(void){
  int n;
  scanf("%d",&n);
  char string[n][2][80];
  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        scanf("%s",string[i][j]);
    }
  }
  for(int i=0;i<n;i++){
    test(string[i][0],string[i][1]);
  }
  return 0;
}
void test(char*s1,char*s2){
if(strcmp(s1,s2) == 0){
    printf("yes\n");
}else if((strlen(s1)-strlen(s2)) == 1){
    char*temp1;
            char*temp2;
            for(int i=0;i<strlen(s1);i++){
               if(s1[i] != s2[i]){
                temp1 = &(s1[i+1]);
                temp2 = &(s2[i]);
                break;
               }
            }
            if(strcmp(temp1,temp2) == 0){
                printf("yes\n");
            }else{
                printf("no\n");
            }
}else if((strlen(s1)-strlen(s2)) == -1) {
          char*temp1;
          char*temp2;
            for(int i=0;i<strlen(s2);i++){
               if(s1[i] != s2[i]){
                temp1 = &(s1[i]);
                temp2 = &(s2[i+1]);
                break;
               }
            }
            if(strcmp(temp1,temp2) == 0){
                printf("yes\n");
            }else{
                printf("no\n");
            }
    }
else if(strlen(s1) == strlen(s2)){
    for(int i=0;i<strlen(s1);i++){
        if(s1[i] != s2[i]){
            char temp = s1[i];
            s1[i] = s1[i+1];
            s1[i+1] = temp;
            break;
        }
    }
    if(strcmp(s1,s2) == 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}else{
   printf("no\n");

}
}
