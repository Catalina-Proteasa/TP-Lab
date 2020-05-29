/*Se considera situatia in care pe bursa de valori, o companie prezinta un numar infinit de stocuri.
Preturile se dau pentru “N” zile, unde v[i] reprezinta costul bursei in ziua “i”. Exista o regula ca un
client, poate cumpara maxim “i” stocuri in ziua “i” Daca clientul are o suma “k” de $, sa se determina
maximul de stocuri care pe care un client le poate cumpara.
Input: v[] = {10, 7 , 19}
k = 45
Output : 4
*/
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
