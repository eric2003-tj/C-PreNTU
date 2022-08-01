#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void intersection(int map[100][100], int result[4]);
int main() {
  int map[100][100];
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
        scanf("%d",&map[i][j]);
    }
  }
  int result[4];
  intersection(map,result);
  for(int i=0;i<4;i++){
    printf("%d\n",result[i]);
  }
  return 0;
}
void intersection(int map[100][100], int result[4]){
    int inter = 0;
    int T_jun = 0;
    int turn =0;
    int dead =0;
for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
        if(i==0){
            if(j==0){
                if(map[i][j]){
                    if(map[i][j+1]==1&&map[i+1][j]==1){
                        turn++;
                    }else if(map[i][j+1]==1||map[i+1][j]==1){
                        dead++;
                    }
                }
            }else if(j==99){
                if(map[i][j]){
                    if(map[i+1][j]==1&&map[i][j-1]==1){
                        turn++;
                    }else if(map[i+1][j]==1&&map[i][j-1]==1){
                        dead++;
                    }
                }

            }else{
                if(map[i][j]){
                    if(map[i+1][j] ==1&&map[i][j+1]==1 &&map[i][j-1] ==1){
                        T_jun++;
                    }else if((map[i+1][j] ==1&&map[i][j+1]==1)||(map[i+1][j] ==1&&map[i][j-1] ==1)){
                       turn++;
                }else if((map[i+1][j] ==1&&map[i][j+1]!=1&&map[i][j-1] !=1)||(map[i+1][j] !=1&&map[i][j+1]==1&&map[i][j-1] !=1)||(map[i+1][j] !=1&&map[i][j+1]!=1&&map[i][j-1] ==1)){
                       dead++;
                }
            }
        }
    }else if(i==99){
        if(j==0){
                if(map[i][j]){
                    if(map[i][j+1]==1&&map[i-1][j]==1){
                        turn++;
                    }else if(map[i][j+1]==1||map[i-1][j]==1){
                        dead++;
                    }
                }
            }else if(j==99){
                if(map[i][j]){
                    if(map[i-1][j]==1&&map[i][j-1]==1){
                        turn++;
                    }else if(map[i-1][j]==1||map[i][j-1]==1){
                        dead++;
                    }
                }
            }else{
                if(map[i][j]){
                    if(map[i-1][j] ==1&&map[i][j+1]==1 &&map[i][j-1] ==1){
                        T_jun++;
                    }else if((map[i-1][j] ==1&&map[i][j+1]==1)||(map[i-1][j] ==1&&map[i][j-1] ==1)){
                       turn++;
                }else if((map[i-1][j] ==1&&map[i][j+1]!=1&&map[i][j-1] !=1) ||(map[i-1][j] !=1&&map[i][j+1]==1&&map[i][j-1] !=1)||(map[i-1][j] !=1&&map[i][j+1]!=1&&map[i][j-1] ==1)){
                       dead++;
                }
            }
        }



    }else{
        if(j==0){
            if(map[i][j]){
                    if(map[i-1][j] ==1&&map[i][j+1]==1 &&map[i+1][j] ==1){
                        T_jun++;
                    }else if((map[i-1][j] ==1&&map[i][j+1]==1)||(map[i][j+1]==1 &&map[i+1][j] ==1)){
                       turn++;
                }else if((map[i-1][j] ==1&&map[i][j+1]!=1&&map[i+1][j]!=1) || (map[i-1][j] !=1&&map[i][j+1]==1&&map[i+1][j]!=1)||(map[i-1][j] !=1&&map[i][j+1]!=1&&map[i+1][j]==1)){
                       dead++;
                }
            }
            }else if(j==99){
                if(map[i][j]){
                    if(map[i-1][j] ==1&&map[i][j-1]==1 &&map[i+1][j] ==1){
                        T_jun++;
                    }else if((map[i-1][j] ==1&&map[i][j-1]==1)||(map[i][j-1]==1 &&map[i+1][j] ==1)){
                       turn++;
                }else if((map[i-1][j] ==1&&map[i][j-1]!=1 &&map[i+1][j] !=1)||(map[i-1][j] !=1&&map[i][j-1]==1 &&map[i+1][j] !=1)||(map[i-1][j] !=1&&map[i][j-1]!=1 &&map[i+1][j] ==1)){
                       dead++;
                }
            }
            }else{
               if(map[i][j]){
                    if(map[i+1][j]==1&&map[i-1][j]==1&&map[i][j+1]==1&&map[i][j-1]==1){
                        inter++;
                    }else if((map[i+1][j]==1&&map[i-1][j]==1&&map[i][j+1]==1)||(map[i-1][j]==1&&map[i][j+1]==1&&map[i][j-1]==1)||(map[i+1][j]==1&&map[i-1][j]==1&&map[i][j-1]==1)||(map[i+1][j]==1&&map[i][j+1]==1&&map[i][j-1]==1)){
                        T_jun++;
                    }else if((map[i+1][j]==1&&map[i][j+1]==1)||(map[i+1][j]==1&&map[i][j-1]==1)||(map[i-1][j]==1&&map[i][j+1]==1)||(map[i-1][j]==1&&map[i][j-1]==1)){
                        turn++;
                    }else if((map[i+1][j]==1&&map[i-1][j]!=1&&map[i][j+1]!=1&&map[i][j-1]!=1) ||(map[i+1][j]!=1&&map[i-1][j]==1&&map[i][j+1]!=1&&map[i][j-1]!=1)||(map[i+1][j]!=1&&map[i-1][j]!=1&&map[i][j+1]==1&&map[i][j-1]!=1)||(map[i+1][j]!=1&&map[i-1][j]!=1&&map[i][j+1]!=1&&map[i][j-1]==1)){
                        dead++;
                    }
            }
            }
    }
    }
}
result[0] = inter;
result[1] = T_jun;
result[2] = turn;
result[3] = dead;
}
