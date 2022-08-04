#include <stdio.h>
struct student{
  char name[20];
  int id;
  char phone_number[15];
  float grade;
  int birthyear,birthmonth,birthday;
};

int main(void)
{ struct student john;
  struct student *ptr = &john;
  ptr->birthyear = 1996;
  ptr->birthmonth = 5;
  ptr->birthday = 28;
  ptr->grade = 4.3;
  ptr->id = 2020;
  strcpy(ptr->name,"Taylor Swift");
  strcpy(ptr->phone_number,"0983275112");
  printf("Name is %s\n",john.name);
  printf("ID is %d\n",john.id);
  printf("Phone_number is %s\n",john.phone_number);
  printf("grade is %f\n",john.grade);
  printf("birthyear is %d\n",john.birthyear);
  return 0;
}
