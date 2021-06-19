#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char str;
    cin >> n;
    for (int i = 0; i < n - 5; i++) {
        cin >> str;
    }
    for (int i = 0; i < 5; i++) {
        cin >> str;
        cout << str;
    }
    return 0;
}