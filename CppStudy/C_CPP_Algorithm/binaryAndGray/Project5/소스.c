#include<stdio.h>

void ToBinary(void);
void FromBinary(void);

int main() {

    int a;
    int breaker = 1;

    while (breaker)
    {
        printf("1. 10진 to 2진 \n");
        printf("2. 10진 from 2진 \n");
        printf("3. 10진 to gray \n");
        printf("4. 10진 from gray \n");
        printf("5. 종료 \n");
        printf("...\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("1. 10진 to 2진 \n");
            ToBinary();
            // 10진 >> 2진 함수
            break;
        case 2:
            printf("2. 10진 from 2진 \n");
            // 2진 >> 10진 함수
            FromBinary();
            break;
        case 3:
            printf("3. 10진 to gray \n");
            // 10진 >> gray
            break;
        case 4:
            printf("4. 10진 from gray \n");
            // gray >> 10진
            break;
        case 5:
            printf("5. 종료 \n");
            breaker = 0;
            break;
        }
    }
}

void ToBinary(void)
{
    int num;
    int Binary;
    int i;
    printf("1. 10진 to 2진 \n");
    printf("정수 입력\n");
    scanf("%d", &num);

    //이진수 출력
    for (int i = 8; i > 0; i--) { //8자리 숫자까지 나타냄
        Binary = num >> (i - 1) & 1;
        printf("%d", Binary);
    }
}

void FromBinary(void)
{
    int num;
    int tmp;
    int breaker = 1;
    int binAry[512] = { 0 };
    int cnt = 0; 
    int keep = 0;
    int i;
    int total = 0;

    printf("2. 10진 from 2진 \n");
    printf("이진수 입력\n");

    scanf("%d", &num);

    //반대로 저장
    while (breaker == 1)
    {
        if ((num == 0) || (num == 1)) {
            tmp = num / 10;
            breaker = 0;
        }
        tmp = num % 10;
        //printf("%d", tmp);
        binAry[cnt] = tmp;
        num = num / 10;
        cnt++;
        
    }
    /*
    for (int i = 0; i < cnt; i++)
    {
        printf("%d", binAry[i]);
    }
    printf("\n");
    */
    
    for (i = 0; i < cnt; i++) {
        num = binAry[i];
        for (int j = 0; j < i; j++) {
            num = num * 2;
        }
        total += num;
    }
    printf("%d", total);
    printf("\n");
}

