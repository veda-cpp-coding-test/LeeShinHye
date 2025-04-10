#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	int M;
	string s = "";

	//첫째줄 문자열 입력받기
	cin >> s;
	list<char> L(s.begin(), s.end());
	auto cur = L.end();

	//둘째줄 입력할 명령어 수 M
	cin >> M;

	//셋째줄부터 명령어 실행
	for (int i = 0; i < M; i++) {
		char cmd;
		char t;
		cin >> cmd;

		if (cmd == 'L') {
			if (cur != L.begin()) {
				cur--;
			}
		}
		else if (cmd == 'D') {
			if (cur != L.end()) {
				cur++;
			}
		}
		else if (cmd == 'B') {
			if (cur != L.begin()) {
				cur--;
				cur = L.erase(cur);
			}
		}
		else if (cmd == 'P') {

			cin >> t;
			L.insert(cur, t);
		}
	}

	for (cur = L.begin(); cur != L.end(); cur++) {
		cout << *cur;  //커서가 가리키는 문자니까 *로
	}



}