#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	//1~n ������ ���ڸ� �����������θ�!���ÿ� push����
	//���ÿ��� pop�ؼ� ���ϴ� ���� ������ ��
	//���� �� ������ ������� +, - ���
	//�Ұ��ϸ� no

	stack<int> s;
	vector<char> v;

	int cnt = 1;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;

		while (cnt <= k) {
			s.push(cnt);
			cnt += 1;
			v.push_back('+');  //push_back�Լ�
		}

		if (s.top() == k) {
			s.pop();
			v.push_back('-');
		}
		else {
			cout << "NO\n";
			return 0;
		}

	}
	for (int i = 0; i < v.size(); i++) {
		//cout << v[i]<<endl; �ð��ʰ� �˰��� ���� Ǯ ���� �⺻������ \n����..
		cout << v[i] << '\n';

	}
	return 0;

}

