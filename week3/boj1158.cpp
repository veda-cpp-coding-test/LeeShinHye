#include <iostream>
#include <list>

using namespace std;

int main() {
	int N, K;

	cin >> N >> K;

	list<int> li;

	//숫자 삽입
	for (int i = 1; i <= N; i++) {
		li.push_back(i);  //끝에 추가
	}

	list<int>::iterator it = li.begin();
	cout << '<';


	while (!li.empty()) {
		for (int i = 0; i < K - 1; i++) {
			it++;
			if (it == li.end())
				it = li.begin();

		}

		cout << *it;

		it = li.erase(it);

		if (it == li.end())
			it = li.begin();

		if (!li.empty())
			cout << ", ";
	}
	cout << '>' << '\n';

	return 0;

}