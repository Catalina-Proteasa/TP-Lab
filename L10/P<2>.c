#include <stdio.h>
#include <stdlib.h>
int a[1000];
int suma(int p, int q)
{
	int m, st, dr;
	if (p == q)
		return a[p];
	else
	{
		m = (p + q) / 2;
		st = suma(p, m);
		dr = suma(m + 1, q);
		return st + dr;
	}
}

int main()
{
	int i, j, k, l, s = 0, max = -32000, n;
	int solutie[1000];
	printf("n=");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i + 1);
        scanf("%d", &a[i]);
	}
		
	for (i = 0; i<n; i++)
		for (j = i + 1; j<n; j++)
		{
			s = suma(i, j);
			if (s>max)
			{
				l = 0;
				max = s;
				for (k = i; k <= j; k++)
				{
					solutie[l] = a[k];
					l++;
				}
			}
		}

	printf("\nSuma maxima este %d\n", max);
	printf("Subsirul cu suma maximala este ");
	for (i = 0; i<l; i++)
		printf("%d ", solutie[i]);
	printf("\n");
	system("pause");
	return 0;
}
