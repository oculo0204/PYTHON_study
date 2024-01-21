#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 변수가 하나인 방정식
// 12x - 11 = 1
// 12x + (-11) = 1
// (-11) + 12x = 1
char* Input(char* p) {
	cout << "방정식을 입력하세요" << endl;
	cin >> p;
	//cout << "이 방정식이 맞습니까?" << endl;
	//cout << p << endl;

	return p;
}

int Length(char* p) {
	int len = 0;
	while(*p != '\0') {
		*p++;
		len++;
	}
	return len;
}


// 12x - 11 = 13
int Left(int len, char* p, int X, int minus) {
	int a = 0;
	int tem = 0;
	for (int i = X-1; i >= 0; i--) {
		if ((p[i] == '+') || (p[i] == '-')) {
			break;
		}
		a += ((int)p[i] - 48)*pow(10, tem); //12
		tem++;
		//cout << a << endl;
		
	}

	return 0;
}

int OneLinear(int (*fptr)(char*), int (*f)(int, char*, int, int), char* p) {
	int len = Length(p);
	int cnt = 0;
	int X = -1;
	int equal = -1;
	int minus = -1;
	char * cat = new char[13];
	for (int i = 0; i < len; i++) {
		cat[i] = p[i];
	}
	int l = 0;
	for (int i = 0; i < len; i++) {
		if (p[i] == 'x') {
			X = i;
		}
		if (p[i] == '=') {
			equal = i;
		}
		if (p[i] == '-') {
			minus = i;
		}
	}
	// 13 = 12x - 11
	// 12x - 11 = 13
	l = len - equal - 1;
	if (X > equal) { 
		for (int i = 0; i < l; i++) {
			p[i] = cat[equal + 1+i];
		}
		p[l] = '=';
		for (int i = l+1; i < len; i++) {
			p[i] = cat[i-l-1];
		}
	}
	delete[]cat;
	Left(len, p, X, minus);
	
	return 0;
}

//debug용
//문자, 숫자 판별
int IsChar(char* p) {
	int len = 0;
	while (*p != '\0') {
		//cout << p[len];
		if (isdigit(*p) == 0) {
			cout << "문자!";
		}
		else {
			cout << "숫자!";
		}
		*p++;
		len++;
	}
	return 0;
}



// Ax + By = 2
int main() {
	char* p = new char[13];
	Input(p);
	OneLinear(Length, Left, p);
	//cout << p;
	delete []p;


	return 0;
}

