/*Sa se implementeze suma numerelor pana la “N” printr-o functie recursiva si prin metodele
repetitive (for, while, do while)*/
#include <stdio.h>
#include <stdlib.h>
int recursiv(int n)
{
	if (n == 0)
		return 0;
	else
		return n + recursiv(n - 1);
}
int forr(int n)
{
	int  s = 0;
	for (int i = 0; i <= n; i++)
		s =s+i;
	return s;
}
int whilee(int n)
{
	int i = 0, s = 0;
	while (i <= n)
	
		s =s+i;
	i++;
	return s;
}
int do_while(int n)
{
	int i = 0, s = 0;
	do
	{
		s += i;
		i++;
	} while (i <= n);
	return s;
}
int main()
{
	int n;
	printf("n="); scanf("%d", &n);
	printf("Recursiv: %d\n", recursiv(n));
	printf("For: %d\n", forr(n));
	printf("While: %d\n", whilee(n));
	printf("Do While: %d\n", do_while(n));
	system("pause");
	return 0;
}
