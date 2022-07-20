#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
int main(void)
{
 int w,d;
 scanf("%d%d",&w,&d);
 bool mirror[w][d];
 for(int i =d-1;i>=0;i--){
    for(int j =0;j<w;j++){
        int temp;
        scanf("%d",&temp);
        mirror[i][j] = (temp==1);
    }
 }
 int dx[4] = {0,-1,0,1};
 int dy[4] = {1,0,-1,0};
 int newDir[4] = {3,2,1,0};
 int x,y,dir;
 for(int i=0;i<2*(w+d);i++){
    if(i<w){
        x = i;y=0;dir=0;
    }else if(i<w+d){
       x = w-1;y=i-w;dir=1;
    }else if(i<2*w+d){
       x = w-(i-(w+d))-1;y=d-1;dir=2;
    }else{
       x=0;y=d-(i-(d+2*w))-1;
       dir =3;
    }

     while(x>=0&&x<w&&y>=0&&y<d){
        if(mirror[x][y]){
            dir = newDir[dir];
            x+=dx[dir];
            y+=dy[dir];
        }
     }
     if(y<0){
        printf("%d\n",x);
     }else if(x>=w){
        printf("%d\n",w+y);
     }else if(y>=d){
        printf("%d\n",w+d+(w-x)-1);
     }else{
        printf("%d\n",2*w+d+d-y-1);
     }
     }
 return 0;
 }
