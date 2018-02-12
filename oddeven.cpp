#include<iostream>

using namespace std;

int main()
{
    int n, a[50], num;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0; i < n; i++)
    {

        cin>>a[i];
        if(a[i]%2==0)
        {
            a[i]=a[i]*2;

        }
        else
        {
            a[i]=a[i]*3;

        }
    }
    for(int i=0; i <= n; i++)
    {
            cout<<a[i]<<" ";
    }
}
