#include <bits/stdc++.h>
using namespace std;

int arr[100];
int tree[400];

void build(int node, int l, int r) {

    if(l == r) {
        tree[node] = arr[l];
        return;
    }

    int mid = (l + r) / 2;

    build(node * 2, l, mid);
    build(node * 2 + 1, mid + 1, r);

    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

int query(int node, int l, int r, int ql, int qr) {

    // Completely outside
    if(r < ql || l > qr)
        return INT_MIN;

    // Completely inside
    if(ql <= l && r <= qr)
        return tree[node];

    int mid = (l + r) / 2;

    int left = query(node * 2, l, mid, ql, qr);
    int right = query(node * 2 + 1, mid + 1, r, ql, qr);

    return max(left, right);
}

int main() {

    int n = 8;

    int temp[] = {2, 1, 5, 3, 4, 7, 2, 6};

    for(int i = 0; i < n; i++)
        arr[i] = temp[i];

    build(1, 0, n - 1);

    cout << query(1, 0, n - 1, 2, 6);

    return 0;
}