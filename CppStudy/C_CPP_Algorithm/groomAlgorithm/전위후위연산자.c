#include <stdio.h>
int main() {
	char s1[10] = ¡°string¡±;
	for (int i = 0; i < 10; i++) {
		printf("%s", s1[i]);
	}
	return 0;
}