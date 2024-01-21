#include <iostream>
using namespace std;

// 변수가 하나인 방정식
// ax + b = 1
char* InputOneLinear(char* p) {
	cout << "방정식을 입력하세요" << endl;
	cin >> p;
	//cout << "이 방정식이 맞습니까?" << endl;
	//cout << p;
	
	return p;
}

int OneLinear(char* p) {
	for (int i = 0; i < p.length(); i++) {
		cout << p[i];
	}
	return 0;
}



// Ax + By = 2
int main() {
	char* p = new char[6];
	InputOneLinear(p);
	OneLinear(p);
	//cout << p;
	delete[]p;

	
	return 0;
}


