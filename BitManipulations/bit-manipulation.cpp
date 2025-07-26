#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
#define endl '\n'

inline ll getBit(ll n, ll pos) { 
    return ((n >> pos) & 1);
}

inline ll setBit(ll n, ll pos) {
    return (n | (1LL << pos));
}

inline ll clearBit(ll n, ll pos) {
    return (n & (~(1LL << pos)));
}

inline ll toggleBit(ll n, ll pos) {
    return (n ^ (1LL << pos));
}

inline ll updateBit(ll n, ll pos, ll bit) {
    return (n & (~(1LL << pos)) | (bit << pos));
}

int main() {

    cout << getBit(5, 1) << endl; // 0 (1 0 1);
    cout << setBit(5, 1) << endl; // 6 (1 1 0);
    cout << clearBit(6, 1) << endl; // 5 (1 0 1);
    cout << toggleBit(6, 1) << endl; // 5 (1 0 1);
    cout << updateBit(5, 1, 1) << endl; // 6 (1 1 0);

    return 0;
}