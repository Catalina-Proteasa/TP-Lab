//Sa se realizeze permutari lexicografice .
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
int n,k,st[50];
char v[10];
void citire()
{
	printf("Numarul de litere= "); scanf("%d", &n);
	printf("Introduceti cuvantul: "); scanf("%s", v);
	printf("Cuvantul citit: "); printf("%s", v);
	printf("\n");
}

bool valid(int k)
{
	for (int i = 1; i<k; i++)
		if (st[i] == st[k]) 
			return false;
	return true;
}

bool solutie(int k)
{
	return k == n;
}
void tipar(int k)
{
	int i;
	for (i = 1; i <= k; i++)
		printf("%c", v[st[i]]);
	printf("\n");
}
void back(int k)
{
	int i;
	for (i = 0; i < n; i++)
	{
		st[k] = i;
		if (valid(k))
			if (solutie(k)) 
				tipar(k);
			else back(k + 1);
	}
}
int main()
{
	citire();
	back(1);
	system("pause");
	return 0;

}
