#include <stdio.h>
int main() {
	int arr[100000];
	int n, k, i;
	int cnt = 0;
	scanf("%d %d", &n, &k); //scanf는 이런 식으로 공백을 포함해도 됨
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	n -= k;
	cnt++;
	//첫번째는 k만큼 제외
	k--;
	//그 다음부터는 k-1씩 제외

	cnt += (n % k == 0 ? n / k : n / k + 1);
	// 5 3 5 % 3 = 2 n/k+1; 5/4 = 1  +1 

	printf("%d", cnt);
	return 0;
}
