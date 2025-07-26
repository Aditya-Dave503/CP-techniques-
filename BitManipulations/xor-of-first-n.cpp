#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
#define endl '\n'

int main() {

    int n = 10;

    if(n % 4 == 0) {
        cout << n << endl;
    } else if(n % 4 == 1) {
        cout << 1 << endl;
    } else if(n % 4 == 2) {
        cout << n+1 << endl;
    } else {
        cout << 0 << endl;
    }

    // (1 ^ 2 ^ 3 ^ 4) = 4;      (n % 4 == 0);
    // (1 ^ 2 ^ 3 ^ 4 ^ 5) = 1;  (n % 4 == 1);
    // (1 ^ 2) = 3;              (n % 4 == 2);
    // (1 ^ 2 ^ 3) = 0;          (n % 4 == 3);

    return 0;
}