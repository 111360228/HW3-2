#include<stdlib.h>
#include<stdio.h>
void h(int n, char A, char B, char C)
{
	if (n == 1) {
		printf("盤子從%c移到%c\n", A, C);
	}
	else {
		h(n - 1, A, C, B);
		printf("盤子從%c移到%c\n", A, C);
		h(n - 1, B, A, C);
	}
}
int main() {
	int n;
	printf("請輸入n:");
	scanf_s("%d", &n);
	h(n, 'A', 'B', 'C');
	return 0;
}