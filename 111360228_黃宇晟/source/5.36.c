#include<stdlib.h>
#include<stdio.h>
void h(int n, char A, char B, char C)
{
	if (n == 1) {
		printf("�L�l�q%c����%c\n", A, C);
	}
	else {
		h(n - 1, A, C, B);
		printf("�L�l�q%c����%c\n", A, C);
		h(n - 1, B, A, C);
	}
}
int main() {
	int n;
	printf("�п�Jn:");
	scanf_s("%d", &n);
	h(n, 'A', 'B', 'C');
	return 0;
}