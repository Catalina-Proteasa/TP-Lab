//Sa se determine combinatii lexicografice .
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
int n, p, st[20];
char v[10];
void citire()
{
	printf("Numarul de litere= "); scanf("%d",&n);
	printf("Introduceti cuvantul: "); scanf("%s",v);
	printf("Cuvantul citit: "); printf("%s", v);
	printf("\n");
}
bool valid(int k)
{
	int i;
	if (k>1 && st[k] <= st[k - 1]) 
		return false;
	return true;
}
bool solutie(int k)
{
	return k == p;
}
void tipar(int k)
{
	int i;
	for (i = 1; i <= k; i++) 
		printf("%c",v[st[i]]); 
	printf("\n");
}
void back(int k)
{
	int i;
	for (i = 0; i < n; i++)
	{
		st[k] =i;
		if (valid(k))
			if (solutie(k)) 
				tipar(k);
			else back(k + 1);
	}
}
int main()
{
	citire();
	for(p=1;p<=n;p++)
	    back(1);
	system("pause");
}
