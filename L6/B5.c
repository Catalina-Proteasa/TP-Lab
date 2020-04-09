/*Se da un set de valori “W”. Sa se scrie la sfarsit toate combinatiile a elementelor din setul respectiv
care sa dea suma “S” fara a se repeta valorile din W.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int st[40], st1[40], n, p, o;
void citire()
{
	do
	{
		printf("Numarul elementelor ce vor fi introduse:");
		scanf("%d", &n);
		printf("Suma dorita: ");
		scanf("%d", &o);
	} while (n <= 0);

	for (int i = 0; i < n; i++)
	{
		printf("W[%d]: ", i + 1);
		scanf("%d", &st1[i]);
	}
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
void afisare(int k)
{
	int nr[100], s = 0;
	for (int i = 1; i <= k; i++)
	{
		s = s + st[i];
		nr[i] = st[i];
	}

	if (s == o)
	{
		for (int i = 1; i <= k; i++)
		{
			if (nr[i])
				printf("%d ", nr[i]);
		}
		printf("\n");
	}
}
void back(int k, int n)
{
	for (int i = 0; i < n; i++)
	{
		st[k] = st1[i];
		if (valid(k))
			if (solutie(k))
				afisare(k);
			else back(k + 1, n);
	}
}
int main()
{
	citire();
	for (p = 1; p <= n; p++)
		back(1, n);
	system("pause");
	return 0;
}
