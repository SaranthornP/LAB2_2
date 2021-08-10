#include<stdio.h>
int main() {
	int a, b;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);
	int d = 1;
	int x = 0;
	while (x==0) {
		x = 1;
		for (int i = 2;i<a||i<b; i++) {
			if (a % i == 0 && b % i == 0) {
				a /= i;
				b /= i;
				d *= i;
				x = 0;
				break;
			}
		}
		if (x == 1) break;
	}
	printf("Greatest common divisor %d", d);
	return 0;
}