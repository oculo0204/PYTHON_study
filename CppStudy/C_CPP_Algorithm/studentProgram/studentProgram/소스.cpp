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
//private�� �� ���� ����?
//ã�ƺ��ϱ� private�ȿ� ���� ���� public�� �� ������ ����ϴ� �Լ��� �־ ����ϴ� ��쵵 �ִ��� ���⼭�� ����ϸ� �ȵǳ�? 
//�ռ� ���� ������� ����ϴ� ����� �ֳ�?
//��� ��쿡 ����ϴ� ����

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
		cout << "1. �߰�" << endl;
		cout << "2. ����" << endl;
		cout << "3. ���" << endl;
		cout << "4. ����" << endl;
		cout << "0. ����" << endl;
		cout << "����� ����� ��ȣ�� �����ϼ���. :";
		cin >> num;
		switch (num)
		{
		case 1: //�߰�
			setInfo(pi, cnt);
			cnt++;
			break;
		case 2: //����
			inputName(pi, cnt, namePi);
			if (nameNum != -1) {
				popInfo(pi, namePi, cnt);
				cnt--;
			}
			break;
		case 3: //���
			inputName(pi, cnt, namePi);
			if (nameNum != -1)
				printInfo(pi, nameNum);
			break;
		case 4: //����
			break;
		case 0:
			cout << "����";
			breaker = 0;
		default:
			cout << "0, 1, 2, 3, 4 �� �ϳ��� ���ڸ� �Է����ּ���.";

		}
	}


	// 1. �߰�
	// 2. ����
	// 3. print
	// 4. ����
	//delete[]pi;
}

void setInfo(student* pi, int cnt) {
	cout << "�̸��� �Է��ϼ��� :";
	cin >> pi[cnt].name;
	cout << "��ȭ��ȣ�� �Է��ϼ��� :";
	cin >> pi[cnt].phone;
	cout << "�ּҸ� �Է��ϼ��� : ";
	cin >> pi[cnt].address;
	cout << "���� ������ �Է��ϼ��� : ";
	cin >> pi[cnt].koScore;
	cout << "���� ������ �Է��ϼ��� : ";
	cin >> pi[cnt].enScore;
	cout << "���� ������ �Է��ϼ��� : ";
	cin >> pi[cnt].mathScore;
}

int printInfo(student* pi, int nameNum) {
	cout << "�̸�:";
	cout << pi[nameNum].name << endl;
	cout << "��ȭ��ȣ: ";
	cout << pi[nameNum].phone << endl;
	cout << "�ּ�: ";
	cout << pi[nameNum].address << endl;
	cout << "���� ����: ";
	cout << pi[nameNum].koScore << endl;
	cout << "���� ����: ";
	cout << pi[nameNum].enScore << endl;
	cout << "���� ����: ";
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

	//01234�϶�
	//2�� ����
	//01������ 3>2 4>3
	//nameNum ����ū �ֵ� �� ���
	
}

void inputName(student* pi, int cnt, int* namePi)
{
	string nam;
	cout << "�л��� �̸��� �Է����ּ���. :";
	cin >> nam;

	for (int i = 0; i < cnt; i++) {
		if (pi[i].name == nam)
		{
			*namePi = i;
		}
	}
	if (*namePi == -1)
	{
		cout << "����Ǿ� ���� ���� �л��Դϴ�." << endl;
	}
}
