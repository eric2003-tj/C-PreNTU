#include <stdio.h>

int main(void) {
  int r,c;
  scanf("%d%d",&r,&c);
  int arr[r][c];
  for(int i = 0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  int d;
  for(int i = 0;i<r;i++){
    for(int j=0;j<c;j++){
        d = arr[i][j];
        if(i!=0 && j!=0 && i!=r-1 && j!=c-1){
            if(arr[i+1][j]<d && arr[i-1][j]<d && arr[i][j-1] <d && arr[i][j+1]<d){
                printf("%d\n",d);
            }
        }else if(i==0 && j==0){
            if(arr[i+1][j]<d && arr[i][j+1]<d){
                printf("%d\n",d);
            }
        }else if(i==0 && j==c-1){
            if(arr[i+1][j]<d && arr[i][j-1]<d){
                printf("%d\n",d);
            }
        }else if(i==r-1 && j==c-1){
            if(arr[i-1][j]<d && arr[i][j-1]<d){
                printf("%d\n",d);
            }
        }else if(i==r-1 && j==0){
            if(arr[i-1][j]<d && arr[i][j+1]<d){
                printf("%d\n",d);
            }
        }else if (i==r-1){
            if(arr[i-1][j]<d && arr[i][j-1] <d && arr[i][j+1]<d){
                printf("%d\n",d);
            }
        }else if(i == 0){
            if(arr[i+1][j]<d && arr[i][j-1] <d && arr[i][j+1]<d){
                printf("%d\n",d);
            }
        }else if(j==0){
            if(arr[i+1][j]<d && arr[i-1][j]<d&& arr[i][j+1]<d){
                printf("%d\n",d);
            }
        }else if(j==c-1){
            if(arr[i+1][j]<d && arr[i-1][j]<d && arr[i][j-1] <d){
                printf("%d\n",d);
            }
        }

    }
  }
  return 0;
}
