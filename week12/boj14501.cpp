#include <iostream>
using namespace std;

int N;
int T[16];
int P[16];
int dp[16];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> T[i] >> P[i];
    }

    for (int i = N; i >= 1; i--){
        if (i + T[i] - 1 <= N)
            dp[i] = max(dp[i+1], P[i] + dp[i + T[i]]);
        else
            dp[i] = dp[i+1];
    }

    cout << dp[1] << '\n';
    return 0;
}