#include <iostream>
using namespace std;

// ������ �ϳ��� ������
// ax + b = 1
char* InputOneLinear(char* p) {
	cout << "�������� �Է��ϼ���" << endl;
	cin >> p;
	//cout << "�� �������� �½��ϱ�?" << endl;
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


