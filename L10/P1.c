#include <stdio.h>
#include <stdlib.h>

int a[100], n, nr;
int no = 0;

void quicksort(int st, int dr)
{
	int i, j, x, aux;
	i = st;
	j = dr;
	x = a[(st + dr) / 2];
	do
	{
		while (a[i]<x)
			i++;
		while (a[j]>x)
			j--;
		if (i <= j)
		{
			aux = a[i];
			a[i] = a[j];
			a[j] = aux;
			i++;
			j--;
		}
	} while (i <= j);
	if (st<j)
		quicksort(st, j);
	if (dr>i)
		quicksort(i, dr);
}

void cautare(int i, int j)
{
	int o;
	int m = (i + j) / 2;

	if (nr == a[m])
	{
		for (o = m; o<n; o++)
		{
			if (nr != a[o])
				break;
			else
				no++;
		}
		for (o = m - 1; o >= 0; o--)
			if (nr != a[o])
				break;
			else
				no++;
	}
	else
		if (i<j)
			if (nr<a[m])
				cautare(i, m - 1);
			else
				cautare(m + 1, j);
		else
			printf("nu a fost gasit");
}

int main()
{
	int aux, i, j;
	printf("n=");
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		printf("v[%d]=", i+1);
		scanf("%d", &a[i]);
	}

	quicksort(0, n - 1);

	for (i = 0; i<n; i++)
	{
		nr = a[i];
		cautare(0, n);
		if (no>(n / 2))
		{
			printf("\nNumarul %d apare de %d,deci este elementul majoritar\n", a[i], no);
			break;
		}
		no = 0;
	}
	system("pause");
	return 0;
}