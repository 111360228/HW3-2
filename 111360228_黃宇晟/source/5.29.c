#include<stdlib.h>
#include<stdio.h>
int m(int x, int y);
int main()
{
	int a, b;
	printf("please enter two numbers:");
	scanf_s("%d %d", &a,&b);
	printf("%d\n",m(a, b));
	system("pause");
	return 0;
}
int m(int x, int y)
{
	if (x > y)
	{
		for (int i = y; i >= 0; i--)
		{
			if (x%i==0 && y % i==0)
			{
				return ((x*y) / i);
				break;
			}
		}
	}
	else
	{
		for (int i = x; i >= 0; i--)
		{
			if (x%i==0 && y % i==0)
			{
				return ((x*y) / i);
				break;
			}
		}
	}
}