#include <stdio.h>
int volumn(int a,int b,int c){
  return a*b*c;
}
int surface(int a,int b,int c){
  return 2*((a*b)+(a*c)+(b*c));
}
int main(void) {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int v,s;
  v = volumn(a,b,c);
  s = surface(a,b,c);
  printf("%d\n%d",s,v);
  return 0;
}
