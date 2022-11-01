#include<stdlib.h>
#include<stdio.h>	

int a(char b);
int main()
{
	char i;
	printf("enter a capital letter:");
	scanf("%c", &i);

	printf("%c\n", 	a(i));
	system("pause");
	return 0;
}
int a(char b)
{
	return b + 32;
}