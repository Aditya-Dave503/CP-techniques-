#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
#define endl '\n'

class DSU {
private :
    vector<ll> parent, size, edge;

public :
    // Constructor: initializes DSU for n elements (1-based index);
    DSU(ll n) {
        parent.resize(n + 1);
        size.assign(n + 1, 1);
        edge.assign(n+1, 0);
        iota(parent.begin(), parent.end(), 0); // parent[i] = i
    }

    // Find the Parent of the set contaning x;
    ll find(ll x) {
        if(parent[x] == x) {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    // Unite the sets containing x and y (by size);
    void unite(ll x, ll y) {
        x = find(x), y = find(y);
        if(x != y) {
            if(size[x] < size[y]) { swap(x, y); }
            parent[y] = x;
            size[x] += size[y];
            edge[x] += edge[y] + 1;
        } else { 
            edge[x]++;
        }
    }

    // Get number of connected components in range [1, n];
    ll componentCount(ll n) {
        ll count = 0;
        for(ll i=1; i<=n; ++i) {
            if(find(i) == i) ++count;
        }
        return count;
    }

    // Returns true if x and y are in the same set; (same Parents);
    bool isSame(ll x, ll y) { return find(x) == find(y); }

     // Get size of the connected component containing x;
    ll getSize(ll x) { return size[find(x)]; }

    // Get number of edges in the component containing x;
    ll getEdgeCount(ll x) { return edge[find(x)]; }
};

int main() {

    DSU ds(9); // Creates DSU for nodes 1 to 9
    // Example usage:
    // ds.unite(1, 2);
    // cout << ds.getSize(1) << "\n";
    
    return 0;
}