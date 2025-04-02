#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c,k ;
	int mul = 0;
	int v[10] = { 0 };

	cin >> a >> b >> c;
	mul = a * b * c;

	while (mul != 0) {
		k = mul % 10;  //나머지값 예를 들어 값이 2345였으면 k=5인데
		v[k]++;  //이걸 a[5]로 배열에
		mul /= 10;  //10 나눠서 다음 각 자리 수 구하기
	}

	for (int i = 0; i < 10;i++) {
		cout << v[i] << endl;
	}

	return 0;

}