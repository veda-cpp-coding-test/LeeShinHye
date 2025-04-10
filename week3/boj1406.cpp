#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	int M;
	string s = "";

	//ù°�� ���ڿ� �Է¹ޱ�
	cin >> s;
	list<char> L(s.begin(), s.end());
	auto cur = L.end();

	//��°�� �Է��� ��ɾ� �� M
	cin >> M;

	//��°�ٺ��� ��ɾ� ����
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
		cout << *cur;  //Ŀ���� ����Ű�� ���ڴϱ� *��
	}



}