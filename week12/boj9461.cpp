#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int cnt;
	int n;
	unsigned long long dp[101];

	cin >> cnt;
	
    //파도반 수열
	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = dp[5] = 2;

	for (int i = 0; i < cnt; i++)
	{
		cin >> n;
		for (int j = 6; j <= n; j++){
			dp[j] = dp[j - 5] + dp[j - 1];
		}
		cout << dp[n] << '\n';
	}
}