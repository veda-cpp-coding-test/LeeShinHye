#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int N;
	string s;

	//ù° �ٿ� �׽�Ʈ���̽�
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s;

		list<char> li;
		auto cur = li.begin();

		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '-') {
				if (cur != li.begin()) {
					cur--;
					cur = li.erase(cur);
				}
			}
			else if (s[j] == '<') {
				if (cur != li.begin())
					cur--;
			}
			else if (s[j] == '>') {
				if (cur != li.end())
					cur++;
			}
			else {
				li.insert(cur, s[j]);
			}

		}
		for (list<char>::iterator it = li.begin(); it != li.end(); it++) {
			cout << *it; //endl�ߴ��� �ð��ʰ�
		}
		cout << "\n";
	}
	return 0;
}