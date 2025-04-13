#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);  //시간초과......

	int N;
	cin >> N;

	//stack<pair<type1, type2>> 스택 하나에 두 개의 정보를 쌍으로 묶어 저장 가능
	stack<pair<int, int>> s;


	for (int i = 1; i <= N; i++) {
		int K;  //송신탑
		cin >> K ;
		

		while (!s.empty()) {
			if (s.top().second > K) {
				cout << s.top().first << " ";
				break;
			}
			
			s.pop();
			}
		
		if (s.empty())
		{
			cout << "0 ";
		}
		s.push({ i, K });
	}
	return 0;
}