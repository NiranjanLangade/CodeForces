#include<iostream>
#include<algorithm>
#include <cctype>
#include <string.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    char ch = toupper(s[0]);
    string s1 = s.substr(1);

    cout<<ch+s1;

    
    return 0;
}