#include <stdio.h>
int main() {
	int input = 0;
	scanf("%d", &input);

	long long num, tmp, Ntmp, n, k; //input을 받는 모든 변수를 long long으로 처리해주어야 한다.
	for (int i = 0; i < input; i++) {
		scanf("%lld %lld", &n, &k);

		tmp = (n + k) / 12;
		Ntmp = n / 5;
		num = (Ntmp <= tmp) ? Ntmp : tmp;

		printf("%lld\n", num);
	}
	return 0;
}
//n이 최소 5개
//n+k가 12개
