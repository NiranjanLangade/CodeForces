#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<"Hard"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Easy"<<endl;
    }
    
    return 0;
}
