#include<iostream>

using namespace std;

int main()
{
  int rs,n2000,n500,n200,n50,n20,n10,n5,n2,n1,ntotal;

  cout<< "enter total currency" <<endl;
  cin>> rs;

  n2000=rs/2000;
  rs=rs%2000;
  n500=rs/500;
  rs=rs%500;
  n200=rs/200;
  rs=rs%200;
  n50=rs/50;
  rs=rs%50;
  n20=rs/20;
  rs=rs%20;
  n10=rs/10;
  rs=rs%10;
  n5=rs/5;
  rs=rs%5;
  n2=rs/2;
  rs=rs%2;
  n1=rs/1;
  cout<<n2000<<" "<<n500<<" "<<n200<<" "<<n50<<" "<<n20<<" "<<n10<<" "<<n5<<" "<<n2<<" "<<n1<<endl;
  ntotal=n2000+n500+n200+n50+n20+n10+n5+n2+n1;
  cout<<"total notes are"<<ntotal<<endl;
  return 0;
}
