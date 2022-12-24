#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int count = 0;

    if(x<=5)
    {
        cout<<"1"<<endl;
        return 0;
    }
    while(x>0)
    {
        count++;
        x = x-5;
    }

    cout<<count<<endl;
    
    return 0;
}