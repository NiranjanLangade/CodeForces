#include<iostream>
using namespace std;

bool check_prime(int n) {
  bool is_prime = true;


  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else if(check_prime(n)==true)
        {
            cout<<"1"<<" "<<n-1<<endl;
        }
        else
        {
            cout<<n/3<<" "<<2*n/3<<endl;
        }
    }
    
    return 0;
}