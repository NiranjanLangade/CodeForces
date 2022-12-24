#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[1001];
	string str;
	cin>>str;
	int j = 0;
	for(int i=0;i<str.size();i++){
	    if(str[i]=='+'){
	        continue;
	    }else{
	        arr[j++]=str[i]-'0';
	    }
	}
	sort(arr,arr+j);
	for(int i=0;i<j;i++){
	    cout<<arr[i];
	    if(i==j-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}