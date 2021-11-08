// Проверка на палиндром
#include <iostream>
using namespace std;
int main()
{
	int n,a,ost,copy;
		a = 0;
	ost = 0;
	scanf_s("%d", &n);
	copy = n;
	while (n>0)
	{
		ost = n % 10;
		a = a * 10 + ost;
		n = n / 10;
	}
	if (a==copy)
	{
		printf("palindrom");
	}
	else
	{
		printf("ne palindrom");
	}
}
