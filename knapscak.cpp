#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    int weight[n + 1], value[n + 1];
    int dp[n + 1][W + 1];

    for (int i = 1; i <= n; i++)
        cin >> weight[i];

    for (int i = 1; i <= n; i++)
        cin >> value[i];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {

            if (i == 0 || w == 0)
                dp[i][w] = 0;

            else if (weight[i] <= w)
                dp[i][w] = max(
                    dp[i - 1][w],
                    dp[i - 1][w - weight[i]] + value[i]
                );

            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    cout << dp[n][W] << endl;

    return 0;
}