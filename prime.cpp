#include<iostream>

using namespace std;

int isprime(int);
int main()
{
  int num;

  cout<<"enter the number"<<endl;
  cin>>num;

  if(isprime(num)==1)
    {
      cout<<"prime number"<<endl;
    }
  else
    {
      cout<<"not prime"<<endl;
    }
  return 0;
}
int isprime(int a)
{
  int i;
  for(int i = 2; i <= a/2; i++)
  {
    if(a % i== 0)
    {
      return 0;
    }
  }

  return 1;
}
