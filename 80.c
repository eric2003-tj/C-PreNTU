#include <stdio.h>

int main(void) {
  int arr[6];
  for(int i = 0;i<6;i++){
    scanf("%d",&arr[i]);
  }
  double a,b,c = 0;
  // 12
  a += ((arr[0] - arr[2])*(arr[0] - arr[2]) + (arr[1] - arr[3])*(arr[1] - arr[3]));
  //23
  b += ((arr[2] - arr[4])*(arr[2] - arr[4])+ (arr[3] - arr[5])*(arr[3] - arr[5]));
  //13
  c += ((arr[0] - arr[4])*(arr[0] - arr[4])+ (arr[1] - arr[5])*(arr[1] - arr[5]));
  if((a == b) || (a == c) || (b == c)){
    printf("等腰三角形");
  }else if((c==a+b) || (b ==a+c) || (a== b+c)){
    printf("直角三角形");
  }else if((c > a+b) || (b > a+c) || (a > b+c)){
    printf("鈍角三角形");
  }else{
    printf("銳角三角形");
  }
  return 0;
}
