#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
int main(void)
{
   int n,k;
   scanf("%d%d",&n,&k);
   int from = 0;
   int to = 1;
   bool life[2][100][100];//100是maxsize
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int temp;
        scanf("%d",&temp);
        life[from][i][j] = (temp == 1);
    }
   }
   for(int iter = 0;iter<k;iter++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int neighbor = 0;
            for(int dx=-1;dx<=1;dx++){
                for(int dy =-1;dy<=1;dy++){
                    if(!(dx==0 && dy ==0)){
                        int x =i+dx;
                        int y = j+dy;
                        if(x>=0&&x<n&&y>=0&&y<n&&life[from][x][y]){
                            neighbor++;
                        }

                    }
                }
            }
            if(life[from][i][j]){
                life[to][i][j] = (neighbor == 2||neighbor==3);
            }else{
                life[to][i][j] = (neighbor == 3);
            }

        }
    }
    from = (from==1)? 0:1;
    to = (to==1)? 0:1;
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j == n-1){
            printf("%d\n",life[from][i][j]);
        }else{
        printf("%d",life[from][i][j]);}
    }
   }
 return 0;
 }
