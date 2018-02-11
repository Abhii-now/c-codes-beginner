#include<iostream>

using namespace std;

int primecount( int a[], int );
int isprime( int );

int main()
{

  int ar[10];

  cout<<"enter the numbers"<<endl;
  for( int i = 0; i < 10; i++  )
   {

     cin>>ar[i];
   }

   cout<<"number of prime numbers is"<<primecount( ar, 10)<<endl;
   return 0;
}

int primecount( int a[], int size )
{
int i,count=0;
for( i = 0; i < size ; i++ )
 {
   if(isprime( a[i] )==1)
   {
     count++;
   }
 }
return count;
}

int isprime(int a )
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
