/*Sa se calculze “radacina digitala” a unui numar “N” introdus de la tastatura. N &gt; 1.000.000
Input : 1234567890123456789012345678901234567890
Output: 9
- Explicatie: Suma cifrelor input-ului este 180
- Suma cifrelor “180” este 9
- Se va insuma fiecare cifra dintr-un sir de numere. In cazul in care suma respectiva are mai
multe cifre, aceasta se va insuma la randul ei pana cand ramane o singura cifra.
*/
#include<stdio.h>
#include<stdlib.h>

long int sumcif(long int x)
{
	if (x == 0)
		return 0;
	if (x<10)
		return x;
	else
		return x % 10 + sumcif(x / 10);
}

int main()
{
	char string[400], i = 0, nr = 0;
	long int c;
	int a[400], s = 0;

	printf("n=");
	scanf("%s", &string);

	while (string[i])
	{
		a[i] = string[i] - '0';
		i++;
	}
	nr = i;

	for (i = 0; i < nr; i++)
		s = s + a[i];

	c = sumcif(s);
	if (c >= 10)
	{
		sumcif(c);
		printf("%d", sumcif(c));
	}
	else printf("%d", c);
	printf("\n");
	system("pause");
	return 0;
}
