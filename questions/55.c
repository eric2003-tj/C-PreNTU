#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
//With some mistakes
int main(void){
int M,N,X1,Y1,E1,N1,F1,X2,Y2,E2,N2,F2;
scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&M,&N,&X1,&Y1,&E1,&N1,&F1,&X2,&Y2,&E2,&N2,&F2);
int ticker1,ticker2 = 1;
int time = 0;
while(F1 > 0 || F2 > 0){
    if(F1 > 0){
       if(ticker1%(N1+E1) <= N1 && ticker1%(N1+E1)!= 0){
        Y1++;
    }else{
        X1++;
    }
    if(Y1 > N-1){
        Y1 = 0;
    }else if(X1 > M-1){
        X1 = 0;
    }
    ticker1++;
    F1--;
    }
    if(F2 > 0){
      if(ticker2%(N2+E2) <= E2 && ticker2%(N2+E2)!=0){
        X2++;
    }else{
        Y2++;
    }
    if(Y2 > N-1){
        Y2 = 0;
    }else if(X2 > M-1){
        X2 = 0;
    }
    ticker2++;
    F2--;
    }
    time++;
    if(X1==X2 && Y1==Y2){
        printf("Explode at time %d",time);
        break;
    }
}
if(X1!=X2||Y1!=Y2){
    printf("Not explode");
}

}
