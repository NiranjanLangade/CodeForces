#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    int m = 0,k = 0;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        m = (a+k) - b;
        
        if(m<0)
            k = 0;
        else
            k = m;
    }

    cout<<m<<endl;


    
    return 0;
}