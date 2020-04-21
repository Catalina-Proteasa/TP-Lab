#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool prime(int n)
{

	int k = 1, d = 2;
	while (d <= round(sqrt(n / 2)))
	{
		if (n%d == 0)
			k = 0;
		d++;
	}
	if (k == 1 && n != 1)
		return true;
	else return false;
}
bool circular(int n, int size)
{
	int co = n;
	do 
	{
		co = co % 10 * pow(10, size - 1) + co / 10;
		if (!prime(co))
			return false;
	} while (n != co);
	return true;
}
int verificare()
{
	int i, cate = 0;
	for (i = 2; i <= 10000; i++)
		if (prime(i) && circular(i, ((log(i/10) + 1)))
		{
			cate++;
			printf("%d\n", i);
		}
	if (cate != 0)
		printf("Sunt %d numere prime circulare sub 10000", c);
}
int main()
{
	verificare();
	system("pause");
	return 0;
}