#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	//1~n 까지의 숫자를 오름차순으로만!스택에 push가능
	//스택에서 pop해서 원하는 수열 만들어야 함
	//만들 수 있으면 연산순서 +, - 출력
	//불가하면 no

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
			v.push_back('+');  //push_back함수
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
		//cout << v[i]<<endl; 시간초과 알고리즘 문제 풀 때는 기본적으로 \n쓰기..
		cout << v[i] << '\n';

	}
	return 0;

}

