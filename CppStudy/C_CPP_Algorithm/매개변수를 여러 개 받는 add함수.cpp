#include <iostream>
using namespace std;

//�Ű������� ���� �� �޴� add �Լ� ����

int main() {
	int input=0;
	int cnt = 0;
	int answer = -1;
	int *A = (int*)malloc(sizeof(int) * 6);
	for (int i = 0; i < 6; ++i) { A[i] = 0; }
	cout << "���ϰ� ���� ���� �Է��ϼ���." << endl;
	cout << "�����ϰ� �ʹٸ� -1�� �Է��ϼ���." << endl;
	cin >> input;
	while (input != -1) {
		cin >> input;
		A[cnt] = input;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		answer += A[i];
	}
	
	cout <<answer << endl;
	return 0;
}

//�����Ҵ� �߰�
//���� ����

