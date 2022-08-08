#include <stdio.h>
float pick(int k,int num)
{
  if(k == 1){
    return num;
  }else{
    return pick(k-1,num-1)*(float)(num/k);
  }
}
int main(void) {
  int k;
  int n;
  int m;
  scanf("%d%d%d",&k,&n,&m);
  int array[n];
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  int num = 0;
  for(int i=0;i<n;i++){
    if(array[i]<=m){
      num++;
    }
  }
  int array2[num];
  int j =0;
  for(int i=0;i<n;i++){
    if(array[i]<=m){
      array2[j] = array[i];
      j++;
    }
  }
  int l;
  l = (int)(pick(k,num));
  printf("%d",l);
  return 0;
}
