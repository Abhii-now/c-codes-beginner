#include<iostream>
#include<ctype.h>

using namespace std;
int main()
{
  char a[20];
  cout<<"enter string"<<endl;
  cin.getline(a,20);


  for(int i=0; a[i] != NULL; i++)
    {

        if(a[i] >= 'A' && a[i] <= 'Z')
        {
          cout<<"the upper case letters are:"<<a[i]<<endl;
        }

        else if(a[i] >= 'a' && a[i] <= 'z')
        {
          cout<<"the lowercase leters are:"<<a[i]<<endl;
        }

        else
         {
           cout<<"special character are:"<<a[i]<<endl;
         }

    }
    return 0;
}
