#include<iostream>

using namespace std;
struct games
{
  long g_code;
  char g_name[20];
  int fees;
  int duration;
}

int main()
{
  struct games G;
  cout<<"enter g_name"<<endl;
  cin.getline(G_name,20);


  if(G_name=="table tennis")
  {
    cout<<"fees is 24000"<<endl;
    cout<<"duration is 3"<<endl;
  }
  else if(G_name=="swimming")
  {

  }
  }
  return 0;
}
