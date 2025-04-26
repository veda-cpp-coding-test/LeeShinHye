#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> str;

	int result = 0;
	int temp = 1;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			temp *= 2;
			s.push('(');
		}
		else if (str[i] == '[') {
			temp *= 3;
			s.push('[');
		}
		else if (str[i] == ')') {
			if (s.empty() || s.top() != '(') {
				result = 0;
				break;
			}

			if (str[i - 1] == '(') {
				result += temp;
				temp /= 2;
				s.pop();
			}
			else {
				temp /= 2;
				s.pop();
			}
		}
		else if (str[i] == ']') {
			if (s.empty() || s.top() != '[') {
				result = 0;
				break;
			}

			if (str[i - 1] == '[') {
				result += temp;
				temp /= 3;
				s.pop();
			}
			else {
				temp /= 3;
				s.pop();
			}
		}
	}
	if (!s.empty()) {
		result = 0;
	}
	cout << result << "\n";
	return 0;

}