#include <iostream>
using namespace std;

//�Ű������� ���� �� �޴� add �Լ� ����

//�迭�� ũ�⸦ ������Ű�� �Լ�
//�� �迭�� ����

int main() {
	int input = 0;
	int cnt = 0;
	int size = 6;
	int answer = 0;
	int* A = new int[size];
	for (int i = 0; i < 6; ++i) { A[i] = 0; }
	cout << "���ϰ� ���� ���� �Է��ϼ���." << endl;
	cout << "�����ϰ� �ʹٸ� -1�� �Է��ϼ���." << endl;
	while (input != -1) {
		if (cnt >= size) {
			int* newArray1 = new int[20];
			// oldArray1���� newArray1�� �־��ְ�
			copy(A, A + min(10, 20), newArray1);
			// oldArray1 �޸� ���� ���ݴϴ�.
			delete[] A;
			// ������ �迭�� ���ο� �迭�� ����Ʈ �ϴ°��� ����Ʈ �ϰ�
			A = newArray1;
			// ���ο� �迭�� �Ҵ����� ���ݴϴ�.
			newArray1 = NULL;
		}
		cin >> input;
		A[cnt] = input;
		cnt++;
	}
	for (int i = 0; i < cnt - 1; i++) {
		answer += A[i];
	}
	delete[]A;
	cout << answer << endl;
	return 0;
}

//�����Ҵ� �߰�
//���� ����

//�Է�
//ó��
//���

