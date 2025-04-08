#include <iostream>
using namespace std;
int arr[100000];
bool exist[2000001];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int x;
	int cnt = 0;
	cin >> x;

	for (int i = 0; i < n; i++) {
		int t = x - arr[i];

		if (t > 0 && exist[t]) {
			cnt++;
			}

		exist[arr[i]] = true;
	}
	cout << cnt << endl;
	return 0;

}
