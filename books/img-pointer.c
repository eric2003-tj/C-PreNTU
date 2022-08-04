#include <stdio.h>
struct complex{
  int real;
  int img;
};
struct complex Addcomplex(struct complex*a,struct complex*b){
  int real;
  int img;
  real = a->real+b->real;
  img = a->img+b->img;
  struct complex c;
  c.real = real;
  c.img = img;
  return c;
};
struct complex Multiplycomplex(struct complex*a,struct complex*b){
  struct complex c;
  c.real = a->real*b->real - a->img*b->img;
  c.img = a->real*b->img+a->img*b->real;
  return c;
};
int main(void){
  struct complex a;
  struct complex b;
  scanf("%d",&(a.real));
  scanf("%d",&(a.img));
  scanf("%d",&(b.real));
  scanf("%d",&(b.img));
  struct complex c = Addcomplex(&a,&b);
  struct complex d = Multiplycomplex(&a,&b);
  printf("%d+%di\n",c.real,c.img);
  printf("%d+%di",d.real,d.img);
  return 0;
}
