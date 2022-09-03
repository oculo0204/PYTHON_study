#include <iostream>
using namespace std;

//매개변수를 여러 개 받는 add 함수 구현

//배열의 크기를 증가시키는 함수
//새 배열에 저장

int main() {
	int input = 0;
	int cnt = 0;
	int size = 6;
	int answer = 0;
	int* A = new int[size];
	for (int i = 0; i < 6; ++i) { A[i] = 0; }
	cout << "더하고 싶은 값을 입력하세요." << endl;
	cout << "종료하고 싶다면 -1을 입력하세요." << endl;
	while (input != -1) {
		if (cnt >= size) {
			int* newArray1 = new int[20];
			// oldArray1값을 newArray1에 넣어주고
			copy(A, A + min(10, 20), newArray1);
			// oldArray1 메모리 해제 해줍니다.
			delete[] A;
			// 오래된 배열이 새로운 배열이 포인트 하는곳을 포인트 하고
			A = newArray1;
			// 새로운 배열은 할당해제 해줍니다.
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

//동적할당 추가
//종료 조건

//입력
//처리
//출력

