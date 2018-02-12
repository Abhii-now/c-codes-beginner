#include<iostream>

using namespace std;
int linearsearch(int a[], int n, int num);
int main()
{
    int n, a[50], num;

    cout<<"enter num"<<endl;
    cin >> num;
    cout<<"enter range"<<endl;
    cin >> n;
    cout<<"enter array"<<endl;

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<linearsearch(a, n, num );
    return 0;
}

int linearsearch(int ar[], int size, int num )
{
    for(int i=0; i < size ; i++)
    {
        if(ar[i]==num)
        {
            return 1;
        }
    }

    return 0;
}
