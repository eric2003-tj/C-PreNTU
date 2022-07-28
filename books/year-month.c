#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
bool leapyear(int year);
int monthdays(int year,int month);
int main(void)
{
 int year,month;
 scanf("%d%d",&year,&month);
 int days;
 days = monthdays(year,month);
 printf("%d",days);
 return 0;
}
bool leapyear(int year){
if(year%400==0 || ((year%4==0)&&(year%100!=0))){
    return true;
}else{
    return false;
}
}
int monthdays(int year,int month){
    int days;
if(leapyear(year)){
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 2:
        days = 29;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    }
}else{
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 2:
        days = 29;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    }
}
return days;
}
