#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	stack<char> s;

	int result = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (str[i - 1] == '(') {
				s.pop();
				result += s.size();
			}
			else {
				result += 1;
				s.pop();
			}
		}
	}
	cout << result << "\n";


}