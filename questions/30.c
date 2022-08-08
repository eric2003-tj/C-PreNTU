//wrong
bool inmaze(int row,int col,int m,int n){
  if(row>=0&&row<m&&col>=0&&col<n){
    return true;
  }
  return false;
}
int mazz(int array[12][12],int m,int n,int currentrow,int currentcolumn)
{ int count = 0;
  if((currentrow == m-1)&&(currentcolumn == n-1)){
    count++;
    return count;
  }
  if(inmaze(currentrow,currentcolumn,m,n))
  {
    if(array[currentrow][currentcolumn])
  {
    if(array[currentrow+1][currentcolumn]==1 && array[currentrow+1][currentcolumn]==1){
        count = mazz(array,m,n,currentrow+1,currentcolumn)+mazz(array,m,n,currentrow,currentcolumn+1);
    }else if(array[currentrow+1][currentcolumn]==1){
        count = mazz(array,m,n,currentrow+1,currentcolumn);
    }else if(array[currentrow][currentcolumn+1]==1){
        count = mazz(array,m,n,currentrow,currentcolumn+1);
    }else{
        count = mazz(array,m,n,currentrow-1,currentcolumn)+mazz(array,m,n,currentrow,currentcolumn-1);
    }
  }
  }
  return count;
}
#define STRINGLEN 128
int main(void)
{
  int array[12][12];
  int m,n;
  scanf("%d%d",&m,&n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&(array[i][j]));
    }
  }
  int count = mazz(array,m,n,0,0);
  printf("%d\n",count);
  return 0;
}
