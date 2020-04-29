//Sa se implementeze binary search sub forma recursiva.
#include<stdio.h>
#include<stdlib.h>
int v[30], n, x;

int citire(int i)
{
	if (i <= n)
	{
		printf("a[%d]=", i);
		scanf("%d", &v[i]);
		citire(i + 1);
	}
}
int afisare(int i)
{
	if (i <= n)
	{
		printf("%d", v[i]);
		afisare(i + 1);
	}
}
//se considera ca vectorul este ordonat crescator
int cauta(int p, int q)
{
	int m;
	m = (p + q) / 2;
	if (v[m] == x) 
		return m;
	else if (p<q) 
		if (x<v[m]) 
			return cauta(p, m - 1);
	else return cauta(m + 1, q);
	else return 0;
}

int main()
{
	int b;
	do
	{
		printf("n="); scanf("%d", &n);
	} while (n <= 0);
	citire(1);
	printf("x="); scanf("%d", &x);
	if (cauta(1, n) != 0)
		printf("Am gasit pe pozitia %d numarul %d\n", cauta(1, n),x);
	else printf("Acest numar nu se afla in sir !");
	system("pause");
	return 0;
}