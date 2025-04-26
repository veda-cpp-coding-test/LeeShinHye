#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	
	int ans = 0;  //총 연산 횟수 저장용

	int N, M;
	cin >> N >> M;

	//초기 덱 구성 [1, 2, 3, ..., ㅜ]
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	while (M--) {
		int x;
		cin >> x;  //현재 뽑아야 할 숫자 입력

		//현재 뽑아야 할 숫자(x)의 위치 찾기
		int idx = 0;
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == x) {
				idx = i;
				break;
			}
		}

		//그 x의 위치가 앞쪽이 가까우면 왼쪽으로, 뒤쪽이 가까우면 오른쪽으로 회전하기
		if (idx <= dq.size() / 2) {
			//왼쪽으로 회전
			while (dq.front() != x) {  //x가 맨 앞이 아니면,
				dq.push_back(dq.front());  //맨 앞의 수를 뒤로 보냄
				dq.pop_front();  //앞 제거
				ans++;  //연산 횟수 증가
			}
		}
		else {
			//오른쪽으로 회전
			while (dq.front() != x) {
				dq.push_front(dq.back());  //맨 뒤 값을 앞으로
				dq.pop_back();  //뒤 제거
				ans++;
			}
		}
		//찾던 x가 맨 앞에 왔으니까 뽑기
		dq.pop_front();
	}
	cout << ans << "\n";

	return 0;

}
