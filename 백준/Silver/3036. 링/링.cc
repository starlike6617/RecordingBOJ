#include <stdio.h>

int gcd(int a, int b) {
	int num;

	if (a < b)
		num = a;
	else
		num = b;

	while (a % num != 0 || b % num != 0)
		num--;

	return num;
}

int main() {
	int n, arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < n; i++) {
		printf("%d/%d\n", arr[0] / gcd(arr[0], arr[i]), arr[i] / gcd(arr[0], arr[i]));
	}

	return 0;
}