#include <stdio.h>
struct date{
  int birthyear;
  int birthmonth;
  int birthday;
};
typedef struct date Date;
struct student{
  char name[20];
  char phone_number[20];
  Date birthday;
  int id;
  float grade;
};
typedef struct student Student;
int main(void){
    Student jack;
    scanf("%s",&(jack.name));
    scanf("%s",&(jack.phone_number));
    scanf("%d",&(jack.birthday.birthyear));
    scanf("%d",&(jack.birthday.birthmonth));
    scanf("%d",&(jack.birthday.birthday));
    scanf("%d",&(jack.id));
    scanf("%f",&(jack.grade));
    printf("%s\n",jack.name);
    printf("%s\n",jack.phone_number);
    printf("%d\t",jack.birthday.birthyear);
    printf("%d\t",jack.birthday.birthmonth);
    printf("%d\n",jack.birthday.birthday);
    printf("%d\n",jack.id);
    printf("%d\n",jack.grade);
}
