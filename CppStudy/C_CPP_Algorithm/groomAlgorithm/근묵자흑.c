#include <stdio.h>
int main() {
	int arr[100000];
	int n, k, i;
	int cnt = 0;
	scanf("%d %d", &n, &k); //scanf�� �̷� ������ ������ �����ص� ��
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	n -= k;
	cnt++;
	//ù��°�� k��ŭ ����
	k--;
	//�� �������ʹ� k-1�� ����

	cnt += (n % k == 0 ? n / k : n / k + 1);
	// 5 3 5 % 3 = 2 n/k+1; 5/4 = 1  +1 

	printf("%d", cnt);
	return 0;
}
