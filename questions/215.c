#include <stdio.h>
//有雞、兔子和螃蟹在同一個籠子裡。 現給定這些動物的總數(s)、動物腳的總數(f)及動物尾巴的總數(t)，(0<=s, f, t<=2^31-1) 請計算兔子、雞、螃蟹的數量
int main(void) {
  int s,f,t;
  printf("請輸入動物總數:");
  scanf("%d",&s);
  printf("請輸入腳總數:");
  scanf("%d",&f);
  printf("請輸入尾巴總數:");
  scanf("%d",&t);
  double a;
  a = 0.5*f;
  if(a == (int)a){
    int x,y,z;
    z = s-t;
    x = 4*s-2*t-a;
    y = -4*s+3*t+a;
    printf("雞:%d,兔子:%d,螃蟹:%d",x,y,z);
  }
  else{
    printf("0");
  }
  
}
