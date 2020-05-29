/*
Fiind dat un numar “k” sa se gaseasca minimul de numere din seria Fibonacci a caror suma da “k”. Se
poate alege un numar in seria fibonacci o singura data.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int st[4000], st1[4000], p, o, numar = 0;
void fibo(int z)
{
	int i = 0, n, a = 0, b = 1, c;

	while (a <= z)
	{
		st1[i] = a;
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	numar = i;
	printf("Sirul fibonaci generat\n");
	for (i = 0; i<numar; i++)
		printf("%d ", st1[i]);
	printf("\n");
}

int valid(int k)
{

	if (k>1 && st[k] <= st[k - 1])
		return 0;
	return 1;
}
int solutie(int k)
{
	return k == p;
}
void afis(int k)
{
	int nr[4000], i, s = 0;
	for (i = 1; i <= k; i++)
	{
		s = s + st[i];
		nr[i] = st[i];
	}

	if (s == o)
	{
		numar = 0;
		printf("Sirul suma:\n");
		for (i = 1; i <= k; i++)
		{
			if (nr[i])
			{
				printf("%d ", nr[i]);
				numar++;
			}
		}
		printf("\n");
		printf("Lungimea minima este: \n%d\n", numar);
		system("pause");
		exit(0);
	}
}
void back(int k, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		st[k] = st1[i];
		if (valid(k))
			if (solutie(k))
			{
				afis(k);
			}
			else back(k + 1, n);
	}
}
int main()
{
	do
	{
		printf("Suma dorita: ");
		scanf("%d", &o);
	} while (o <= 0);
	fibo(o);

	for (p = 1; p <= numar; p++)
		back(1, numar);
	if (numar == 0)
		printf("Nu se poate gasi un sir pentru aceasta suma!\n");

	system("pause");
	return 0;
}
