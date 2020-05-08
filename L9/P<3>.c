//Se citeste o valoarea “N”, sa se determine cea mai lunga secventa de cifre care sa respecte urmatoarea secventa:
// n = n / 2 (n este par)
// n = 3n + 1 (n este impar
#include<stdio.h>
#include<stdlib.h>
int rec(int N)
{
	int n;
	if (N == 1)
		return 1;
		
     if (N % 2 == 0)
	  {
		n = N / 2;
		printf("->%d", n);
		rec(n);
	  }
	  else
	    {
         n = 3 * N + 1;
		 printf("->%d", n);
		 rec(n);
	    }	
}

int main()
{
	int N;
	printf("N="); scanf("%d", &N);
	printf("%d", N);
	rec(N);
	printf("\n");
	system("pause");
	return 0;

}
