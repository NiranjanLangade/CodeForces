#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int upper = 0;
    int lower = 0;

    int i = 0;
    int n = s.length();

    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if(lower>=upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout<<s<<endl;
    
    return 0;
}