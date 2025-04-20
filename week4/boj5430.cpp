#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	while (T--) {
		deque<int> dq;
		string p;
		cin >> p;

		int n;
		cin >> n;

		string arr;
		cin >> arr;

		arr.erase(0, 1);
		if (!arr.empty() && arr.back() == ']') {
			arr.pop_back();
		}

		stringstream ss(arr);
		string token;
		while (getline(ss, token, ',')) {
			if (!token.empty()) {
				dq.push_back(stoi(token));
			}
		}

		bool reversed = false;
		bool error = false;

		for (char cmd : p) {
			if (cmd == 'R'){
				reversed = !reversed;
			}
			else if (cmd == 'D') {
				if (dq.empty()) {
					error = true;
					break;
				}
				if (!reversed) dq.pop_front(); //방향 반전됐으면 앞에서 삭제
				else dq.pop_back();  //아니면 뒤에서 삭제
			}
		}

		if (error) {
			cout << "error\n";
		}
		else {
			cout << "[";
			if (!dq.empty()) {
				if (!reversed) {
					for (int i = 0; i < dq.size(); i++) {
						cout << dq[i];
						if (i < dq.size() - 1) cout << ",";
					}
				}
				else {
					for (int i = dq.size() - 1; i >= 0; i--) {
						cout << dq[i];
						if (i > 0) cout << ",";
					}
				}
			}
			cout << "]\n";
		}
	}
	return 0;
}