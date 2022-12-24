#include<iostream>
using namespace std;
int count = 0;

int main()
{
    int n,a,b,c;
    

    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;
        

        if(a==b==1 || b==c==1 || a==c==1)
        {
            count++;
        }
    }

    cout<<count-1<<endl;    
    return 0;
}