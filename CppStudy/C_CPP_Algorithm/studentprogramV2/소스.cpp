#include <iostream>
#define TEXT "Welcome to C++ Programming!!"
using namespace std;

/* BOOK ������ ���� ����*/
typedef struct books
{
    int bookid;
    char bookname[20];
    char publisher[20];
    int price;

    void show();
} BOOK;

void BOOK::show() {
    cout << "bookid : " << bookid << endl;
    cout << "bookname : " << bookname << endl;
    cout << "publisher : " << publisher << endl;
    cout << "price : " << price << endl;
}

int main() {
    BOOK BOOKS[10];

    /* ����ü �迭 ������ ������ ���� */
    /* ù��° ���� ���� */
    BOOKS[1].bookid = 1;
    strcpy_s(BOOKS[1].bookname, "�౸�� ����");
    strcpy_s(BOOKS[1].publisher, "�½�����");
    BOOKS[1].price = 7000;

    BOOKS[1].show();
    return 0;
}
