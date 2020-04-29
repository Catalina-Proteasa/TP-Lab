// Sa se implementeze BubbleSort recursiv .
#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int a[], int n)
{
	int i, aux;
	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			if (a[i] > a[i-1])
			{
				aux = a[i];
				a[i] = a[i - 1];
				a[i - 1] = aux;
			}
		}
		BubbleSort(a, n - 1);
	}
	return;
}
int main()
{
	int i, n, a[30];
	printf("n=");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	BubbleSort(a, n);
	printf("Vectorul sortat este : ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}