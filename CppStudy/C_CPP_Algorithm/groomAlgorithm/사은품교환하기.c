#include <stdio.h>
int main() {
	int input = 0;
	scanf("%d", &input);

	long long num, tmp, Ntmp, n, k; //input�� �޴� ��� ������ long long���� ó�����־�� �Ѵ�.
	for (int i = 0; i < input; i++) {
		scanf("%lld %lld", &n, &k);

		tmp = (n + k) / 12;
		Ntmp = n / 5;
		num = (Ntmp <= tmp) ? Ntmp : tmp;

		printf("%lld\n", num);
	}
	return 0;
}
//n�� �ּ� 5��
//n+k�� 12��
