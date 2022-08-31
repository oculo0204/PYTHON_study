#include<stdio.h>

void ToBinary(void);
void FromBinary(void);

int main() {

    int a;
    int breaker = 1;

    while (breaker)
    {
        printf("1. 10�� to 2�� \n");
        printf("2. 10�� from 2�� \n");
        printf("3. 10�� to gray \n");
        printf("4. 10�� from gray \n");
        printf("5. ���� \n");
        printf("...\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("1. 10�� to 2�� \n");
            ToBinary();
            // 10�� >> 2�� �Լ�
            break;
        case 2:
            printf("2. 10�� from 2�� \n");
            // 2�� >> 10�� �Լ�
            FromBinary();
            break;
        case 3:
            printf("3. 10�� to gray \n");
            // 10�� >> gray
            break;
        case 4:
            printf("4. 10�� from gray \n");
            // gray >> 10��
            break;
        case 5:
            printf("5. ���� \n");
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
    printf("1. 10�� to 2�� \n");
    printf("���� �Է�\n");
    scanf("%d", &num);

    //������ ���
    for (int i = 8; i > 0; i--) { //8�ڸ� ���ڱ��� ��Ÿ��
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

    printf("2. 10�� from 2�� \n");
    printf("������ �Է�\n");

    scanf("%d", &num);

    //�ݴ�� ����
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

