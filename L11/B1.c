#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n, k, i, v[200], nr = 0, stoc = 0;

	printf("Numarul de zile:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	printf("k=");
	scanf("%d", &k);
	for (i = 1; i <= n; i++)
	{
		nr = 0;
		while (k >= v[i] && nr<i)
		{
			k = k - v[i];
			nr++;
		}
		stoc = stoc + nr;
	}
	if (stoc == 0)
		printf("Nu aveti suficienti bani\n");
	else
	printf("Numarul de stocuri ce pot fi cumparate: %d \n", stoc);

	system("pause");
	return 0;
}
