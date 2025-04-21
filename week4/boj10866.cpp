#include <iostream>
#include <deque>
#include <string>

using namespace std;
//STL µ¦

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> D;
	
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		if (s == "push_front") {
			int X;
			cin >> X;
			D.push_front(X);
		}
		else if (s == "push_back") {
			int X;
			cin >> X;
			D.push_back(X);
		}
		else if (s == "pop_front") {
			if (!D.empty()) {
				cout << D.front() << "\n";
				D.pop_front();
			}
			else {
				cout << "-1\n";
			}
		}
		else if (s == "pop_back") {
			if (!D.empty()) {
				cout << D.back() << "\n";
				D.pop_back();
			}
			else {
				cout << "-1\n";
			}
		}
		else if (s == "size") {
			cout << D.size() << "\n";
		}
		else if (s == "empty") {
			cout << D.empty() << "\n";
		}
		else if (s == "front") {
			if (!D.empty()) {
				cout << D.front() << "\n";
			}
			else {
				cout << "-1" << "\n";
			}
		}
		else if (s == "back") {
			if (!D.empty()) {
				cout << D.back() << "\n";
			}
			else {
				cout << "-1" << "\n";
			}
		}



	}

}