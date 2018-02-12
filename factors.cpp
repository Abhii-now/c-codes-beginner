#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the factors are"<<endl;
    for(int i = 1; i <= n ; i++)
    {
        if(n % i == 0)
        {
            cout <<" "<< i ;
        }
    }
return 0;
}
