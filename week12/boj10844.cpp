#include <iostream>
using namespace std;

#define MOD 1000000000

int dp[101][10];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][1] % MOD;
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][8] % MOD;
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= 9; i++) {
        result = (result + dp[n][i]) % MOD;
    }

    cout << result << '\n';
    return 0;
}