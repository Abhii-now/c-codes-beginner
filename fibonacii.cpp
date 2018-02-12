#include<iostream>

using namespace std;

int main()
{
    int x=0,y=1,n=0,z=0;

    cout<<"enter range"<<endl;
    cin>>n;
    cout<<x;
    for(int i = 0; i < n; i++)
    {
        z=x+y;
        cout<<z;
        y=z+x;
        cout<<y;
        x=z+y;
        cout<<x;
    }
    return 0;
}
