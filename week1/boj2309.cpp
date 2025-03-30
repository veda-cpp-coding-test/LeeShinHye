#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n[10];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n[i];
		sum += n[i];
	}

	sort(n, n + 9);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			if (n[i] + n[j] == (sum - 100)) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << n[k] << endl;
					}
				}
				return 0;
			}
		}
	}
	return 0;
}