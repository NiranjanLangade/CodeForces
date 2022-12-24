#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int arr[5][5];

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
            {
                x = abs(3-i);
                y = abs(3-j);
            }
        }
    }

    cout<<x+y-2<<endl;
    
    return 0;
}