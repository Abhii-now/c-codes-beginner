#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}
int main()
{
  int a[5][5],i,j,row,column;

  cout<<"enter the number of rows"<<endl;
  cin>>row;
  cout<<"enter number of columns"<<endl;
  cin>>column;

  cout<<"enter the matrix"<<endl;
  for(i = 0; i < row; i++)
  {
      for (j=0; j < column; j++)
      {
          cin>>a[i][j];
      }
  }
  for(j = 0; j < column; j++)
  {
      swap(a[0][j],a[row-1][j]);

  }
  for(i = 0; i < row; i++)
  {
      for (j=0; j < column; j++)
      {
          cout<<a[i][j];
      }
  }
  return 0;
}
