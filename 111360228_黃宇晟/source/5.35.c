#include<stdlib.h>
#include<stdio.h>
long fib(int);
int main()
{
	int n;
	printf("請輸入n值(<49):");
	scanf_s("%d", &n);
	for (int i = 0; i <= 1; i--)
	{
		if (n > 48)
		{
			printf("請輸入n值:");
			scanf_s("%d", &n);
		}
		else
			break;
	}
	printf("fib=%1d\n", fib(n));
	printf("max fib=%1d\n", fib(48));
	system("pause");
	return 0;

}

long fib(int n)
{
	int i;
	long f[1000];
	f[0] = 0; f[1] = 1;
	for (i = 2; i <= n; i++)
		f[i] = f[i - 1] + f[i - 2];
	return f[n];
}
