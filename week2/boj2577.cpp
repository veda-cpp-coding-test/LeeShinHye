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
		k = mul % 10;  //�������� ���� ��� ���� 2345������ k=5�ε�
		v[k]++;  //�̰� a[5]�� �迭��
		mul /= 10;  //10 ������ ���� �� �ڸ� �� ���ϱ�
	}

	for (int i = 0; i < 10;i++) {
		cout << v[i] << endl;
	}

	return 0;

}