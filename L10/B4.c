#include<stdio.h>
#include<stdlib.h>
int n, numar, a[20][20], b[100];

void citire()
{
	int i, j;
	printf("Dimensiunea tabloului -> ");
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			printf("a[%d][%d]=", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
}

void quicksort(int st, int dr)
{
	int i, j, x, aux;
	i = st;
	j = dr;
	x = b[(st + dr) / 2];
	do
	{
		while (b[i]<x)
			i++;
		while (b[j]>x)
			j--;
		if (i <= j)
		{
			aux = b[i];
			b[i] = b[j];
			b[j] = aux;
			i++;
			j--;
		}
	} while (i <= j);
	if (st<j)
		quicksort(st, j);
	if (dr>i)
		quicksort(i, dr);
}

int cautare(int i, int j)
{
	int o;
	int m = (i + j) / 2;

	if (numar == b[m])
	{
		return 1;
	}
	else
		if (i<j)
			if (numar<b[m])
				cautare(i, m - 1);
			else
				cautare(m + 1, j);
		else
			return 0;
}

int main()
{

	int i, j, k = 0;
	citire();

	printf("\nMatricea introdusa este:\n");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	}

	quicksort(0, k - 1);
	k = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			a[i][j] = b[k];
			k++;
		}
	}

	printf("\nMatricea sortata este:\n");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	printf("\nInput:");
	scanf("%d", &numar);

	j = cautare(0, k - 1);

	if (j == 1)
		printf("\tTrue\n\n");
	else
		printf("\False\n");

	system("pause");
	return 0;
}