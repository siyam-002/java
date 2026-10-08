#include <bits/stdc++.h>
using namespace std;

int parent[100];

int find(int x) {
    if(parent[x] == x)
        return x;

    return parent[x] = find(parent[x]);
}

bool unite(int a, int b) {
    a = find(a);
    b = find(b);

    if(a == b)
        return false;

    parent[b] = a;
    return true;
}

int main() {
    int n, e;
    cin >> n >> e;

    for(int i = 1; i <= n; i++)
        parent[i] = i;

    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        if(!unite(u, v)) {
            cout << "Cycle detected";
            return 0;
        }
    }

    cout << "No cycle";

    return 0;
}