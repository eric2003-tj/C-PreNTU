#include <stdio.h>
int numberofone(int n)
{
int bit = 0;
  for(int i=0;i<sizeof(int)*8;i++){
    if((n&1)!=0){
        bit++;
    }
    n>>=1;
  }
return bit;
}

int main(void)
{
  int i;
  int bit;
  int array[100];
  int ticker = 0;
  while(scanf("%d",&i)!=EOF){
    bit = numberofone(i);
    array[ticker] = bit;
    ticker++;
  }
  for(int i=0;i<ticker;i++){
    printf("%d\n",array[i]);
  }
}
