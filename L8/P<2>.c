/*Sa se implementeze calculul de factorial sub urmatoarea forma:
- Functie “tail-recursive”
- Functie “ non-tailed-recursive”
- Functie “direct recursive”
- Functie “indirect recursive” */
#include<stdio.h> 
#include<stdlib.h>
// TAIL-RECURSIVE
int fac(int n, int a)
{
	if (n == 0)  
		return a;

	return fac(n - 1, n*a);
}
int fact( int n)
{
	return fac(n, 1);
}

// NON TAIL-RECURSIVE
int facto(unsigned int n)
{
   if (n == 0) 
      return 1;
return fact(n-1)*n;
}
// DIRECT RECURSIVE
int factor(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factor(n - 1);
	}
}
// INDIRECT RECURSIVE
int factorr(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factor(n - 1);
	}
}

int main()
{
	int n, a;
	printf("n="); scanf("%d", &n);
	printf("Factorialul cu tail-recursive este %d\n",fact(n));
	printf("Factorialul cu non tail-recursive este %d\n", facto(n));
	printf("Factorialul cu direct recursive este %d\n", factor(n));
	printf("Factorialul cu indirect recursive este %d\n", factorr(n));
	system("pause");
	return 0;
}
