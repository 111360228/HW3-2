#include<stdlib.h>
#include<stdio.h>

int k(int x,int y);
int e(int z, int w);
int main()
{
	int a,b,s,u;
	printf("enter two integers(base,exponent):");
	scanf("%d %d", &a, &b);
	printf("power(%d,%d)=%d", a, b, a);
	s=k(a, b);
	for (int g = s; g > a; g = g / a)
	{
		printf("*%d", a);
	}
	u=e(a, b);
	printf("=%d", u);
}
int k(int x, int y)
{
	int t=1;
	for (int i = y; i >= 1; i--)
	{
		t = t * x;
	}
	return t;
}
int e(int z, int w)
{
	int m=1;
	for (int i = 1; i <= w; i++)
	{
		m = m * z;
	}
	return m;
}