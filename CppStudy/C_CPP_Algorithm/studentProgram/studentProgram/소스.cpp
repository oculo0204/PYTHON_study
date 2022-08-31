#include <iostream>

using namespace std;

class student {
public:
	string name;
	string phone;
	string address;
	int koScore = -1;
	int enScore = -1;
	int mathScore = -1;
};
//private은 왜 쓰는 거임?
//찾아보니까 private안에 변수 쓰고 public에 그 변수를 사용하는 함수를 넣어서 사용하는 경우도 있던데 여기서는 사용하면 안되나? 
//앞서 말한 방법말고도 사용하는 방법이 있나?
//어떠한 경우에 사용하는 거지

void setInfo(student* pi, int cnt);
void popInfo(student* pi, int* namePi, int cnt);
int printInfo(student* pi, int nameNum);
//void sortInfo();
void inputName(student* pi, int cnt, int* namePi);



int main()
{
	int num;
	int cnt = 0;
	int size = 5;
	int breaker = 1;
	student* pi;
	pi = new student[size];


	while (breaker == 1)
	{
		int nameNum = -1;
		int* namePi = &nameNum;
		cout << "1. 추가" << endl;
		cout << "2. 삭제" << endl;
		cout << "3. 출력" << endl;
		cout << "4. 정렬" << endl;
		cout << "0. 종료" << endl;
		cout << "사용할 기능의 번호를 선택하세요. :";
		cin >> num;
		switch (num)
		{
		case 1: //추가
			setInfo(pi, cnt);
			cnt++;
			break;
		case 2: //삭제
			inputName(pi, cnt, namePi);
			if (nameNum != -1) {
				popInfo(pi, namePi, cnt);
				cnt--;
			}
			break;
		case 3: //출력
			inputName(pi, cnt, namePi);
			if (nameNum != -1)
				printInfo(pi, nameNum);
			break;
		case 4: //정렬
			break;
		case 0:
			cout << "종료";
			breaker = 0;
		default:
			cout << "0, 1, 2, 3, 4 중 하나의 숫자를 입력해주세요.";

		}
	}


	// 1. 추가
	// 2. 삭제
	// 3. print
	// 4. 정렬
	//delete[]pi;
}

void setInfo(student* pi, int cnt) {
	cout << "이름을 입력하세요 :";
	cin >> pi[cnt].name;
	cout << "전화번호를 입력하세요 :";
	cin >> pi[cnt].phone;
	cout << "주소를 입력하세요 : ";
	cin >> pi[cnt].address;
	cout << "국어 성적을 입력하세요 : ";
	cin >> pi[cnt].koScore;
	cout << "영어 성적을 입력하세요 : ";
	cin >> pi[cnt].enScore;
	cout << "수학 성적을 입력하세요 : ";
	cin >> pi[cnt].mathScore;
}

int printInfo(student* pi, int nameNum) {
	cout << "이름:";
	cout << pi[nameNum].name << endl;
	cout << "전화번호: ";
	cout << pi[nameNum].phone << endl;
	cout << "주소: ";
	cout << pi[nameNum].address << endl;
	cout << "국어 성적: ";
	cout << pi[nameNum].koScore << endl;
	cout << "영어 성적: ";
	cout << pi[nameNum].enScore << endl;
	cout << "수학 성적: ";
	cout << pi[nameNum].mathScore << endl;

	return 0;
}

void popInfo(student* pi, int* namePi, int cnt)
{
	int tem = *namePi;
	pi[*namePi].name.erase();
	pi[*namePi].phone.erase();
	pi[*namePi].address.erase();
	pi[*namePi].koScore=0;
	pi[*namePi].enScore=0;
	pi[*namePi].mathScore=0;

	while (tem <cnt) {
		pi[tem].name = pi[tem+1].name;
		pi[tem].phone = pi[tem + 1].phone;
		pi[tem].address = pi[tem + 1].address;
		pi[tem].koScore = pi[tem + 1].koScore;
		pi[tem].enScore = pi[tem + 1].enScore;
		pi[tem].mathScore = pi[tem + 1].mathScore;
		tem++;
	}

	//01234일때
	//2번 삭제
	//01가만히 3>2 4>3
	//nameNum 보다큰 애들 다 당겨
	
}

void inputName(student* pi, int cnt, int* namePi)
{
	string nam;
	cout << "학생의 이름을 입력해주세요. :";
	cin >> nam;

	for (int i = 0; i < cnt; i++) {
		if (pi[i].name == nam)
		{
			*namePi = i;
		}
	}
	if (*namePi == -1)
	{
		cout << "저장되어 있지 않은 학생입니다." << endl;
	}
}
