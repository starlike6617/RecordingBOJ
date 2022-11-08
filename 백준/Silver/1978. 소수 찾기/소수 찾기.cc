#include <stdio.h>

int count = 0;
void findPrime(int a);

int main() {
	int n, arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		findPrime(arr[i]);
	}

	printf("%d", count);

	return 0;
}

void findPrime(int a) {
	for (int i = 1; i < a; i++) {
		if (i == a - 1)
			count++;
		else if (a % i == 0 && i != 1)
			break;
	}
}