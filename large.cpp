#include<iostream>

using namespace std;

int Large(int a[], int n)
{
  int max;
  max = a[0];
  for(int i=0; i < n; i++)
  {
    if(max < a[i])
    {
      max=a[i];
    }
  }
  return max;
}
int main()
{
  int max, a[20],n;
  cout<<"enter a range"<<endl;
  cin>>n;
  cout<<"enter an array"<<endl;

  for(int i=0; i < n; i++)
  {
    cin>>a[i];
  }
  cout<<"largest number of array are"<<endl;
  cout<<Large( a, n);
  return 0;
}
