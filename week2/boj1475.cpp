#include <iostream>
using namespace std;

// 6, 9�� ����, 0~8 ���� ����

int N;
int cnt[9];

int main() {
	cin >> N;

	//�Է¹޴� �� N�� ���� ���� Ƚ�� ����
	while (N > 0) {
		int i = N % 10;
		N /= 10;
		
		//6, 9�� ���Ƽ� 6�� ����
		if (i == 6 || i == 9) {
			cnt[6]++;
		}
		else {
			cnt[i]++;
		}
	}


	//6, 9�� ���� ���� ���������ϱ� �ʿ��� ��Ʈ ���� ���
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