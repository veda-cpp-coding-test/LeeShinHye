#include <iostream>
using namespace std;

// 6, 9는 같고, 0~8 숫자 세기

int N;
int cnt[9];

int main() {
	cin >> N;

	//입력받는 수 N의 숫자 등장 횟수 세기
	while (N > 0) {
		int i = N % 10;
		N /= 10;
		
		//6, 9는 몰아서 6에 저장
		if (i == 6 || i == 9) {
			cnt[6]++;
		}
		else {
			cnt[i]++;
		}
	}


	//6, 9는 같은 수로 간주했으니까 필요한 세트 개수 계산
	cnt[6] = (cnt[6] + 1) / 2;

	int maxcnt = 0;

	for (int i = 0; i < 9; i++) {
		if (cnt[i] > maxcnt) {
			maxcnt = cnt[i];
		}
	}

	cout << maxcnt << endl;
	return 0;
}