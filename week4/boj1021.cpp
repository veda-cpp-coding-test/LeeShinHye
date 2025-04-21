#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	
	int ans = 0;

	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	while (M--) {
		int x;
		cin >> x;

		int idx = 0;
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == x) {
				idx = i;
				break;
			}
		}

		if (idx <= dq.size() / 2) {
			while (dq.front() != x) {
				dq.push_back(dq.front());
				dq.pop_front();
				ans++;
			}
		}
		else {
			while (dq.front() != x) {
				dq.push_front(dq.back());
				dq.pop_back();
				ans++;
			}
		}
		dq.pop_front();
	}
	cout << ans << "\n";

	return 0;

}