//Sa se implementeze QuickSort recursiv.
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
		printf("%d ", v[i]);
		afisare(i + 1);
	}
}
int pivot(int st, int dr)
{
	int i, j, aux, di, dj;

	i = st; j = dr;
	di = 0; dj = 1;
	while (i<j)
	{
		if (v[i]>v[j])
		{
			aux = v[i]; v[i] = v[j]; v[j] = aux;
			aux = di; di = dj; dj = aux;
		}
		i = i + di;
		j = j - dj;
	}
	return i;
}

void quicksort(int st, int dr)
{
	int p;
	if (st<dr)
	{
		p = pivot(st, dr);
		quicksort(st, p - 1);
		quicksort(p + 1, dr);
	}
}

int main()
{
	int i;
	printf("n="); scanf("%d",&n);
	citire(1);
	printf("Vectorul este : ");
	afisare(1);
	printf("\nVectorul ordonat este: ");
	quicksort(1, n);
	afisare(1);
	printf("\n");
	system("pause");
	return 0;
}
