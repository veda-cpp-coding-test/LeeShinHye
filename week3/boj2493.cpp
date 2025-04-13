#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);  //�ð��ʰ�......

	int N;
	cin >> N;

	//stack<pair<type1, type2>> ���� �ϳ��� �� ���� ������ ������ ���� ���� ����
	stack<pair<int, int>> s;


	for (int i = 1; i <= N; i++) {
		int K;  //�۽�ž
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