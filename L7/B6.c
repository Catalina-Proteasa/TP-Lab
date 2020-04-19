/*Nea Vasile se intoarce acasa de la cumparaturi, si realizeaza ca si-a uitat codul de la casa scarii. In
acest moment Nea Vasile are nevoie de ajutorul nostru. Se stie ca pentru codul respective sunt
folosite 4 cifre din cele 10 (0…9), insa el fiind si la o varsta inaintata nu mai tine minte exact care cifre
erau mai exact. Sa se genereze toate combinatiile luate cate 4 a celor pe care si le aminteste nea’
Vasile. (Cifrele nu se pot repeta)*/
#include <stdio.h>
int st[40],st1[40], n, p=4;
void citire()
{ 
	int i, j,l,aux;
	do
	{
		printf("Numarul elementelor ce vor fi introduse:");
		scanf("%d", &n);
	} while (n <= 0);
	for (l = 0; l < n; l++)
	{
		printf("a[%d]: ", l + 1);
		scanf("%d", &st1[l]);
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j<n; j++)
			if (st1[i] > st1[j])
			{
				aux = st1[i];
				st1[i] = st1[j];
				st1[j] = aux;
			}
}
int valid(int k)
{
	for (int i = 1; i<k; i++) 
		if (st[i] == st[k]) 
		return 0;
	return 1;
}
int solutie(int k)
{
	return k == p;
}
void afisare(int k)
{
	int i;
	for (i = 1; i <= k; i++) 
		printf("%d",st[i]);
	printf("\n");
}
void back(int k,int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		st[k] = st1[i];
		if (valid(k))
			if (solutie(k)) 
				afisare(k);
			else back(k + 1,n);
	}
}
int main()
{
	citire();
	back(1,n);
	system("pause");
	return 0;
}
