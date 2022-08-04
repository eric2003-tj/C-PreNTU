#include <stdio.h>
struct student{
  char name[20];
  int id;
  char phone_number[15];
  float grade;
  int birthyear,birthmonth,birthday;
};

int main(void)
{ struct student john = {"John Smith",12345,"0983275112",4.0,1993,8,2};
  strcpy(john.name,"Taylor Swift");
  printf("name is %s\n",john.name);
  return 0;
}
