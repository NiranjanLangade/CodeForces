#include <iostream>
#include <algorithm>
using namespace std;
string s1, s2;
int main() {
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] < 92) {
            s1[i] += 32;
        }
        if (s2[i] < 92) {
            s2[i] += 32;
        }
    }
    if (s1 < s2) {
        cout << -1;
    } else if (s1 > s2) {
        cout << 1;
    } else if (s1 == s2) {
        cout << 0;
    }
}