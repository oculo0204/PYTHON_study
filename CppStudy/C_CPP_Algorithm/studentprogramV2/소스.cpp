#include <iostream>
#define TEXT "Welcome to C++ Programming!!"
using namespace std;

/* BOOK 데이터 구조 정의*/
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

    /* 구조체 배열 변수에 데이터 저장 */
    /* 첫번째 도서 저장 */
    BOOKS[1].bookid = 1;
    strcpy_s(BOOKS[1].bookname, "축구의 역사");
    strcpy_s(BOOKS[1].publisher, "굿스포츠");
    BOOKS[1].price = 7000;

    BOOKS[1].show();
    return 0;
}
