#include <stdio.h>
struct complex{
  int real;
  int img;
};
void Addcomplex(struct complex*a,struct complex*b,struct complex*c){
  int real;
  int img;
  real = a->real+b->real;
  img = a->img+b->img;
  c->real = real;
  c->img = img;
}
void Multiplycomplex(struct complex*a,struct complex*b,struct complex*c){
  c->real = a->real*b->real - a->img*b->img;
  c->img = a->real*b->img+a->img*b->real;
}
int main(void){
  struct complex a;
  struct complex b;
  struct complex c;
  struct complex d;
  scanf("%d",&(a.real));
  scanf("%d",&(a.img));
  scanf("%d",&(b.real));
  scanf("%d",&(b.img));
  Addcomplex(&a,&b,&c);
  Multiplycomplex(&a,&b,&d);
  printf("%d+%di\n",c.real,c.img);
  printf("%d+%di",d.real,d.img);
  return 0;
}
