#include <iostream>
using namespace std;

//매개변수를 여러 개 받는 add 함수 구현

int main() {
	int input=0;
	int cnt = 0;
	int answer = -1;
	int *A = (int*)malloc(sizeof(int) * 6);
	for (int i = 0; i < 6; ++i) { A[i] = 0; }
	cout << "더하고 싶은 값을 입력하세요." << endl;
	cout << "종료하고 싶다면 -1을 입력하세요." << endl;
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

//동적할당 추가
//종료 조건

