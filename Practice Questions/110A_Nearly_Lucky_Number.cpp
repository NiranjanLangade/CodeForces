#include<iostream>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    int count = 0;
    while(n!=0)
    {
        r = n%10;
        if(r==4 || r==7)
        {
            count++;
        }
        n = n/10;
    }

    if(count%4==0 || count%7==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}